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
void insertion_sort(void);
node* getPre(node*);
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
    insertion_sort();
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

// getting pointer for previous node of target
node* getPre (node* target) {
    if (head == target) {
        return NULL;
    }
    node* current = head;
    while (current->next != target) {
        current = current->next;
    }
    return current;
}

/*
Insertion sort implementation for linked list
Builds the final sorted list one item at a time by repeatedly taking the next element
and inserting it into the correct position in the already-sorted part of the list
Time complexity: O(n^2), Space complexity: O(1)
*/
void insertion_sort() {
    if (head == NULL || head->next == NULL){
        return;
    }
    node* sorted = NULL;
    node* current = head->next;
    while (current != NULL) {
        node* temp = current;
        while (temp != head) {
            node* pre = getPre(temp);
            if (pre->val > temp->val) {
                swap(pre, temp);
                temp = pre;
            } else {
                break;
            }
        }
        current = current->next;
    }
}