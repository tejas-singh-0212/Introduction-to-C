#include<stdio.h>
#include<stdlib.h>
typedef struct Node{
    int data;
    struct Node* next;
}node;
node *head=NULL;

void push(int item){
    node* new_node=(node*)malloc(sizeof(node));
    if (new_node == NULL){
        printf("Memory allocation failed.\n");
        return;
    }
    new_node->data=item;
    new_node->next=head;
    head=new_node;
}

int pop(){
    if(head==NULL){
        printf("Stack is empty.\n");
        return -1;
    }
    int item=head->data;
    node* temp=head;
    head=head->next;
    free(temp);
    return item;
}

int top(){
    if(head==NULL){
        printf("Stack is empty.\n");
        return -1;
    }
    return head->data;
}

void display(){
    if(head==NULL){
        printf("Stack is empty.\n");
        return;
    }
    node* temp=head;
    while(temp!=NULL){
        printf("%d, ", temp->data);
        temp=temp->next;
    }
    printf("\n");
}

int main(){
    int choice, item;
    while(1){
        printf("1. Push\n2. Pop\n3. Top\n4. Display\n5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch(choice){
            case 1:
                printf("Enter item to push: ");
                scanf("%d", &item);
                push(item);
                break;
            case 2:
                item = pop();
                if(item != -1)
                    printf("Popped item: %d\n", item);
                break;
            case 3:
                item = top();
                if(item != -1)
                    printf("Top item: %d\n", item);
                break;
            case 4:
                display();
                break;
            case 5:
                exit(0);
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }    
    return 0;
}