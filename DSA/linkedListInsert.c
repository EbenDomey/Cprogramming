#include <stdio.h>
#include <stdlib.h>

struct Node {
	int data;
	struct Node* next;
};

void insert_end(struct Node** list, int data);
void printList(struct Node* list);

int main() {
	struct Node* head = NULL;

	for(int i = 0; i < 10; i++) {
		insert_end(&head, i);
	}

	printList(head);
}

void insert_end(struct Node** list, int data) {
	struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
	struct Node* last = *list;
	newNode->data = data;
	newNode->next = NULL;

	if(*list == NULL) {
		*list = newNode;
		return;
	}

	while(last->next != NULL) {
		last = last->next;
	}

	last->next = newNode;
	return;
}

void printList(struct Node* node) {
	while(node != NULL) {
		printf("%d->", node->data);
		node = node->next;
	}
	printf("NULL\n");
}
