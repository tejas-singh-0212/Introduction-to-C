#include <stdio.h>
#include <stdlib.h>
typedef struct Node {
    int data;
    struct Node* next;
} node;
node *head1 = NULL, *head2 = NULL;
void merge(){
    if(head1 == NULL){
        head1 = head2;
        printf("List merged successfully.\n");
        return;
    }
    if(head2 == NULL){
        printf("List merged successfully.\n");
        return;
    }
    node *temp = head1;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = head2;
    printf("List merged successfully.\n");
}