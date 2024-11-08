#include <stdio.h>
#include <stdlib.h>


typedef struct node{
	int data;
	struct node *next;
}node;




struct node *removenode(struct node *head, int key){
	struct node *temp=head;
	if(head->data==key){
		head=head->next;
		free(temp);
	}
	else{
		while(temp->next->data!=key){
			if(temp->next->next==NULL){
				return head;
			}
			temp=temp->next;
		}
		struct node *delete=temp->next;
		temp->next=delete->next;
		free(delete);
	}
	return head;
}




void printlist(struct node*head){
	if(head==NULL){
		printf("the list is empty");
	}else{
		struct node *temp=head;
		while(temp!=NULL){
			printf("data: %d\n",temp->data);
			temp=temp->next;
		}
	}
}




int main(){
	
	struct node *head=(struct node*)malloc(sizeof(struct node));
	head->data=5;
	head->next=NULL;
	head->next=(struct node*)malloc(sizeof(struct node));
	head->next->data=7;
	head->next->next=NULL;
	
	
	head= addfront(head,3);
	head= addlast(head,9);
	printlist(head);
	head=removenode(head,7);
	print("new list");
	printlist(head);
	
	return 0;
}
