#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

// Node structure for singly linked list
typedef struct Node {
    int val;
    struct Node* next;
} node;

// Global head pointer for the linked list
node* head = NULL;

// Function declarations
void insert(int);
void bubble_sort(void);
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
    bubble_sort();
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

/*
Swap the values of two nodes
*/
void swap (node* n1, node* n2) {
    int temp = n1->val;
    n1->val = n2->val;
    n2->val = temp;
}

/*
Bubble sort implementation for linked list
Repeatedly swaps adjacent nodes if they are in wrong order
Time complexity: O(n^2), Space complexity: O(1)
*/
void bubble_sort() {
    if (head == NULL || head->next == NULL){
        return;
    }
    bool swapped;
    node* temp;
    do {
        swapped = false;
        temp = head;
        while (temp->next != NULL) {
            if (temp->val > temp->next->val) {
                swap(temp, temp->next);
                swapped = true;
            }
            temp = temp->next;
        }
    } while (swapped);
}