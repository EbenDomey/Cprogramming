#include <stdio.h>
#include <stdlib.h>

/* 
 * @description: This code creates a singly linked list. when you see the '->' operator its just like the member(.) operator
 * @description: ie. newNode.data is the same as newNode->data. 
 * happy learning!!
 */

struct Node{
	int data;
	struct Node* next;
};

struct Node* create_node(int data);

struct Node* insert(struct Node* head, int data);

void insert_end(struct Node** linkedList, int data);

void print_list(struct Node* head);

int count(struct Node* head);

int main() {
	 struct Node* head = NULL;

	for(int i = 0; i < 10; i++){
		insert_end(&head, i);
	}
	printf("Linked list: ");
	print_list(head);
	printf("total number of elements: %d", count(head));
	
	return 0;
}

//function to create a node in the singly linked list
//malloc is used to determine the overall size of the list at runtime for flexibility of number of nodes in the list
struct Node* create_node(int data) {
	struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
	newNode->data = data;
	newNode->next = NULL;
	return newNode;
}

struct Node* insert(struct Node* head, int data) {
	struct Node* newNode = create_node(data);
	newNode->next = head;
	return newNode;
}

 void insert_end(struct Node** linkedList, int data) {
	struct Node* newNode = create_node(data);
	struct Node* node = *linkedList;
	newNode->next = NULL;

	if(*linkedList == NULL) {
		*linkedList = newNode;
		return;
	}

	while(node->next != NULL) {
		node = node->next;
		}
	node->next = newNode;
	return;
}

void print_list(struct Node* head) {
	struct Node* node = head;
	while(node != NULL) {
		printf("%d->", node->data);
		node = node->next;
	}
	printf("NULL\n");
}

int count(struct Node* head) {
	struct Node* node = head;
	int c = 0;

	while(node != NULL) {
		c++;
		node = node->next;
	}
	return c;
}
