#include<stdio.h>
#include<stdlib.h>
typedef struct Node{
	int val;
	struct Node *next;
} node;
node *head = NULL;

void insertBegin(int item){
	node *newNode = (node *)malloc(sizeof(node));
	if(newNode == NULL){
		printf("Memory allocation failed.\n");
		return;
	}
	newNode->val = item;
	newNode->next = head;
	head = newNode;
	printf("Node inserted successfully.\n");
}

void insertEnd(int item){
	node *newNode = (node *)malloc(sizeof(node));
	if(newNode == NULL){
		printf("Memory allocation failed.\n");
		return;
	}
	newNode->val = item;
	newNode->next = NULL;
	if (head == NULL) {
		head = newNode;
        return;
    }
    node *temp = head;
    while (temp->next != NULL) {
		temp = temp->next;
    }
    temp->next = newNode;
	printf("Node inserted successfully.\n");
}

void insertPos(int item, int pos){
    if (pos < 0) {
        printf("Invalid position.\n");
        return;
    }
	node *newNode = (node *)malloc(sizeof(node));
	node *temp;
	if(newNode == NULL){
		printf("Memory allocation failed.\n");
		return;
	}
	newNode->val = item;
	if (pos == 0) {
        newNode->next = head;
        head = newNode;
        printf("Node inserted successfully.\n");
        return;
    }
	temp = head;
	int i;
	for (i = 0; i < pos - 1 && temp != NULL; i++) {
		temp = temp->next;
	}
	if (temp == NULL) {
        printf("Position out of range.\n");
        free(newNode);
        return;
    }
	newNode->next = temp->next;
	temp->next = newNode;
	printf("Node inserted successfully.\n");
}

void insertVal(int item, int s){
	node *newNode = (node *)malloc(sizeof(node));
	node *temp;
	if(newNode == NULL){
		printf("Memory allocation failed.\n");
		return;
	}
	newNode->val = item;
	newNode->next = NULL;
	temp = head;
	while(temp != NULL && temp->val != s){
		temp = temp->next;
	}
	if(temp == NULL){
		printf("Item does not exist in list.\n");
		free(newNode);
		return;
	}
	newNode->next = temp->next;
	temp->next = newNode;
	printf("Node inserted successfully.\n");
}

void delBegin(){
	node *temp;
	if(head == NULL){
		printf("List is empty.\nNothing to delete.\n");
		return;
	}
	temp = head;
    head = head->next;
    free(temp);
    printf("Node deleted successfully.\n");
}

void delEnd(){
	node *temp;
	if(head == NULL){
		printf("List is empty.\nNothing to delete.\n");
		return;
	}
	else if(head->next == NULL){
        free(head);
        head = NULL;
        printf("Node deleted successfully.\n");
        return;
    }
	temp = head;
	node *p = NULL;
	while(temp->next != NULL){
		p = temp;
		temp = temp->next;
	}
	p->next = NULL;
	free(temp);
	printf("Node deleted successfully.\n");
}

void delLoc(int loc){
	if(head == NULL){
		printf("List is empty.\nNothing to delete.\n");
		return;
	}else if(loc < 0){
        printf("Invalid location.\n");
        return;
    }else if(loc == 0){
        node *temp = head;
        head = head->next;
        free(temp);
        printf("Node deleted successfully.\n");
        return;
    }
	node *temp = head;
    for(int i = 0; i < loc - 1 && temp != NULL; i++){
		temp = temp->next;
	}
	if(temp == NULL || temp->next == NULL){
        printf("Location out of range.\n");
        return;
    }
    node *T = temp->next;
    temp->next = T->next;
    free(T);
    printf("Node deleted successfully.\n");
}

void delVal(int val){
    if(head == NULL){
        printf("List is empty.\nNothing to delete.\n");
        return;
    }
    if(head->val == val){
        node *temp = head;
        head = head->next;
        free(temp);
        printf("Node with value %d deleted successfully.\n", val);
        return;
    }
    node *temp = head;
    while(temp->next != NULL && temp->next->val != val){
        temp = temp->next;
    }
    if(temp->next == NULL){
        printf("Value %d does not exist in the list.\n", val);
        return;
    }
    node *T = temp->next;
    temp->next = T->next;
    free(T);
    printf("Node with value %d deleted successfully.\n", val);
}

void traverse(){
	if(head == NULL){
		printf("List is empty.\n");
		return;
	}
	node *temp;
	temp = head;
	while(temp != NULL){
		printf("%d -> ", temp->val);
		temp = temp->next;
	}
}

void search(int s){
	if(head == NULL){
		printf("List is empty.\nNothing to search.\n");
		return;
	}
	node *temp = head;
	int pos = 0;
	while(temp != NULL){
        if(temp->val == s){
            printf("Element %d found at position: %d\n", s, pos);
            return;
        }
        temp = temp->next;
        pos++;
    }
	printf("Element %d not found in list.\n",s);
}

node* reverseList(node *current) {
    if (current == NULL || current->next == NULL)
        return current;
    node *newHead = reverseList(current->next);
    current->next->next = current;
    current->next = NULL;
    return newHead;
}

void sumOfNodes() {
    if (head == NULL) {
        printf("List is empty.\n");
        return;
    }
    int sum = 0;
    node *temp = head;
    while (temp != NULL) {
        sum += temp->val;
        temp = temp->next;
    }
    printf("Sum of all node values = %d\n", sum);
}

void length() {
    if (head == NULL) {
        printf("List is empty.\n");
        return;
    }
    int count = 0;
    node *temp = head;
    while (temp != NULL) {
        count++;
        temp = temp->next;
    }
    printf("Length of the list = %d\n", count);
}

int main() {
    int choice, item, pos, val;
    while(1) {
        printf("\n--- LINKED LIST MENU ---\n");
        printf("1. Insert at Beginning\n");
        printf("2. Insert at End\n");
        printf("3. Insert at Position\n");
        printf("4. Insert after Value\n");
        printf("5. Delete from Beginning\n");
        printf("6. Delete from End\n");
        printf("7. Delete from Location\n");
        printf("8. Delete by Value\n");
        printf("9. Traverse\n");
        printf("10. Search\n");
        printf("11. Reverse List\n");
        printf("12. Sum of All Nodes\n");
        printf("13. Length of List\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {

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
                printf("Enter position: ");
                scanf("%d", &pos);
                insertPos(item, pos);
                break;

            case 4:
                printf("Enter value to insert: ");
                scanf("%d", &item);
                printf("Insert after which value? ");
                scanf("%d", &val);
                insertVal(item, val);
                break;

            case 5:
                delBegin();
                break;

            case 6:
                delEnd();
                break;

            case 7:
                printf("Enter location to delete: ");
                scanf("%d", &pos);
                delLoc(pos);
                break;

            case 8:
                printf("Enter value to delete: ");
                scanf("%d", &val);
                delVal(val);
                break;

            case 9:
                traverse();
                printf("NULL\n");
                break;

            case 10:
                printf("Enter value to search: ");
                scanf("%d", &val);
                search(val);
                break;

            case 11:
                head = reverseList(head);
                printf("List reversed successfully.\n");
                break;

            case 12:
                sumOfNodes();
                break;

            case 13:
                length();
                break;

            case 0:
                printf("Exiting program...\n");
                exit(0);

            default:
                printf("Invalid choice. Try again.\n");
        }
    }
    return 0;
}
