#include <stdio.h>
#include <stdlib.h>

struct node{
	int data;
	struct node *next;
};

    //inserting element in front of the list
	struct node *addfront(struct node *head, int key){
		struct node *temp;
		temp=(struct node*)malloc(sizeof (struct node));
		temp->data=key;
		temp->next=head;
		head=temp;
		return head;
	}
	
	//inserting element to the end of the list
	struct node *addlast(struct node *head, int key){
		struct node *temp=(struct node*)malloc(sizeof (struct node));
		temp->data=key;
		temp->next=NULL;
		if(head==NULL){
			head=temp;
		}else{
			struct node *last = head;
			while(last->next!=NULL){
				last=last->next;
			}
			last->next=temp;
		}
		return head;
	}

int main(){
	
	//creating a list
	struct node *head;
	head = (struct node*)malloc(sizeof(struct node));
	head->data=7;
	head->next=NULL;
	head->next=(struct node*)malloc(sizeof(struct node));
	head->next->data=5;
	head->next->next=NULL;
	printf("head: %d, next: %d\n", head->data, head->next->data);
	
	//inserting element in front of the list
	head = addfront(head,2);
	printf("head: %d, next: %d, next of next: %d\n", head->data, head->next->data, head->next->next->data);
	
	
	
	//inserting element to the end of the list
	head = addlast(head,1);
	
	
	
	//write list
	printf("***list***\n");
	struct node *temp = head;
    while (temp != NULL) {
        printf("Data: %d\n", temp->data);
        temp = temp->next;
    }
    
    
    
	return 0;
}
