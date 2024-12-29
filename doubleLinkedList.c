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


// delete  a node
struct node *deletenode(struct node *head, int key){
    if(head == NULL){
        printf("liste bos");
        return;
    }

    struct node *temp =head;
    if(head->data == key){
        struct node *last =head;
        while (last->next != head){
            last = last->next;
        }    
        head = head->next; 
        last->next = head; 
        free(temp);
        return head;
        
    }else{
        while(temp->next->data!=key){
            if(temp->next->next==NULL){
                printf("Silmek istediginiz veri bulunmamaktadir");
                return head;
            }
            temp=temp->next;
        }
        struct node *temp2 = temp -> next;
        temp -> next = temp -> next -> next;
        free(temp2);
    }
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
