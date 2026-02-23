#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
	int val;
	struct Node *next, *pre;
} node;
node *head = NULL;

void insertBegin(int item){
    node *newNode = (node*)malloc(sizeof(node));    
    if(newNode == NULL){
        printf("Memory allocation failed\n");
        return;
    }
    newNode->val = item;
    newNode->pre = NULL;
    newNode->next = head;
    if(head != NULL){
        head->pre = newNode;
    }
    head = newNode;
    printf("Node inserted successfully.\n");
}

void insertEnd(int item){
    node *newNode = (node*)malloc(sizeof(node));
    if(newNode == NULL){
        printf("Memory allocation failed.-\n");
        return;
    }
    newNode->val = item;
    newNode->next = NULL;
    if(head == NULL){
        newNode->pre = NULL;
        head = newNode;
        printf("Node inserted successfully.\n");
        return;
    }
    node *temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = newNode;
    newNode->pre = temp;
    printf("Node inserted successfully.\n");
}

void insertLoc(int item, int loc){
    if(loc < 0){
        printf("Invalid location.\n");
        return;
    }
    node *newNode = (node*)malloc(sizeof(node));
    if(newNode == NULL){
        printf("Memory allocation failed.\n");
        return;
    }
    newNode->val = item;
    if(loc == 0){
        newNode->pre = NULL;
        newNode->next = head;
        if(head != NULL){
            head->pre = newNode;
        }
        head = newNode;
        printf("Node inserted successfully.\n");
        return;
    }
    node *temp = head;
    int i;
    for(i = 0; i < loc - 1 && temp != NULL; i++){
        temp = temp->next;
    }
    if(temp == NULL){
        printf("Invalid location.\n");
        free(newNode);
        return;
    }
    if(temp->next == NULL){
        temp->next = newNode;
        newNode->pre = temp;
        newNode->next = NULL;
        return;
    }
    newNode->next = temp->next;
	newNode->pre = temp;
    temp->next->pre = newNode;
    temp->next = newNode;
    printf("Node inserted successfully.\n");
}

void delBegin(){
	if(head == NULL){
		printf("List is empty.\n");
		return;
	}
	node *temp = head;
	if(head->next == NULL){
		head = NULL;
	}else{
		head = head->next;
		head->pre = NULL;
	}
	free(temp);
	printf("Node deleted successfully.\n");
}

void delEnd(){
	if(head == NULL){
		printf("List is empty.\n");
		return;
	}
	node *temp = head;
	if(head->next == NULL){
		head = NULL;
	}
	else{
		while(temp->next != NULL){
			temp = temp->next;
		}
		temp->pre->next = NULL;
	}
	free(temp);
	printf("Node deleted successfully.\n");
}

void delLoc(int loc){
    if(head == NULL){
        printf("List is empty.\n");
        return;
    }
    if(loc < 0){
        printf("Invalid location.\n");
        return;
    }
    node *temp = head;
    if(loc == 0){
        head = head->next;
        if(head != NULL){
            head->pre = NULL;
        }
        free(temp);
        printf("Node deleted successfully.\n");
        return;
    }
    int i;
    for(i = 0; i < loc && temp != NULL; i++){
        temp = temp->next;
    }
    if(temp == NULL){
        printf("Invalid location.\n");
        return;
    }
    if(temp->next != NULL){
        temp->pre->next = temp->next;
        temp->next->pre = temp->pre;
    }
	else {
        temp->pre->next = NULL;
    }
    free(temp);
    printf("Node deleted successfully.\n");
}

void display(){
	if(head == NULL){
		printf("List is empty.\n");
		return;
	}
	node *temp = head;
	while(temp != NULL){
		printf("%d <-> ",temp->val);
		temp = temp->next;
	}
	printf("NULL\n");
}

int main() {
    int choice, item, loc;
    while (1) {
        printf("=== Doubly Linked List Menu ===\n");
        printf("1. Insert at Beginning\n");
        printf("2. Insert at End\n");
        printf("3. Insert at Location\n");
        printf("4. Delete from Beginning\n");
        printf("5. Delete from End\n");
        printf("6. Delete from Location\n");
        printf("7. Display List\n");
        printf("8. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value to insert: ");
                scanf("%d", &item);
                insertBegin(item);
                break;

            case 2:
                printf("Enter value to insert: ");
                scanf("%d", &item);
                insertEnd(item);
                break;

            case 3:
                printf("Enter value to insert: ");
                scanf("%d", &item);
                printf("Enter location (0-based index): ");
                scanf("%d", &loc);
                insertLoc(item, loc);
                break;

            case 4:
                delBegin();
                break;

            case 5:
                delEnd();
                break;

            case 6:
                printf("Enter location (0-based index): ");
                scanf("%d", &loc);
                delLoc(loc);
                break;

            case 7:
                display();
                break;

            case 8:
                printf("Exiting program...\n");
                exit(0);

            default:
                printf("Invalid choice. Try again.\n");
        }
    }
    return 0;
}