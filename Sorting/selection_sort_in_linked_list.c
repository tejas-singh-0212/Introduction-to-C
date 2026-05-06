#include<stdio.h>
#include<stdlib.h>

// Node structure for singly linked list
typedef struct Node {
    int val;
    struct Node* next;
} node;

// Global head pointer for the linked list
node* head = NULL;

// Function declarations
void insert(int);
void selection_sort(void);
void display(void);
void swap(node*, node*);

/*
Main function - Entry point of the program
Takes user input to create a linked list, displays it,
sorts it using bubble sort, and displays the sorted list
*/
int main () {
    int n;
    printf("Enter number of elements for linked list: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++){
        int element;
        printf("Enter element [%d]: ", i + 1);
        scanf("%d", &element);
        insert(element);
    }
    printf("Original list: ");
    display();
    selection_sort();
    printf("Sorted list: ");
    display();
    return 0;
}

// Insert a new node at the end of the linked list
void insert (int item) {
    node* newNode = (node *)malloc(sizeof(node));
    if (newNode == NULL) {
        printf("Memory allocation failed.\n");
        return;
    }
    newNode->val = item;
    newNode->next = NULL;
    if (head == NULL) {
        head = newNode;
        return;
    }
    node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
    return;
}

// Display all elements in the linked list
void display () {
    if (head == 0) {
        printf("List is empty.\n");
        return;
    }
    node* temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->val);
        temp = temp->next;
    }
    printf("NULL\n");
}

// Swap the values of two nodes
void swap (node* n1, node* n2) {
    int temp = n1->val;
    n1->val = n2->val;
    n2->val = temp;
}

/*
Selection sort implementation for linked list
Repeatedly finds the minimum element from unsorted part and puts it at the beginning
Time complexity: O(n^2), Space complexity: O(1)
*/
void selection_sort() {
    if (head == NULL || head->next == NULL){
        return;
    }
    node* temp = head;
    while (temp != NULL) {
        node* min = temp;
        node* following = min->next;
        while (following != NULL) {
            if (following->val < min->val) {
                min = following;
            }
            following = following->next;
        }
        if (min != temp) {
            swap(min, temp);
        }
        temp = temp->next;
    }
}