#include <stdio.h>
#include <stdlib.h>

typedef struct node{
	int data;
	struct node *next;
	struct node *prev;
};

// add a node in front of the double linked list
struct node *addfront(struct node *head, int key){
	struct node *temp = (struct node*)malloc(sizeof(struct node));
	temp->data=key;
	temp->next=head;
	temp->prev=NULL;
	if(head!=NULL){
		head->prev=temp;
	}
	head=temp;
	return head;
}

int main(){
	
	struct node *head=(struct node*)malloc(sizeof(struct node));
	head->data=7;
	head->prev=NULL;
	head->next=(struct node*)malloc(sizeof(struct node));
	head->next->data=5;
	head->next->next=NULL;
	head->next->prev = head;
	printf("head: %d, next: %d\n", head->data, head->next->data);
	
	
	//add in front of
	head=addfront(head,1);
	
	
	//write list
	printf("***list***\n");
	struct node *temp = head;
    while (temp != NULL) {
        printf("Data: %d\n", temp->data);
        temp = temp->next;
    }
	
	return 0;
}
