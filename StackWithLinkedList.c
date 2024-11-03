#include <stdio.h>
#include <stdlib.h>

//stack elemanýný temsil eden yapý
typedef struct node{
	int data;
	struct node *next;
}node;



typedef struct{
	struct node *top;
	int cnt;
}stack;


void initialize(stack *stk){
	stk->top=NULL;
	stk->cnt=0;
}


void push(stack *stk, int c){
	struct node *newnode = (node*)malloc(sizeof(node));
	if(newnode==NULL){
		printf("stack is full");
		return;
	}else{
		newnode->data=c;
		newnode->next=stk->top;
		stk->top=newnode;
		stk->cnt++;
		printf("%d added to stack.\n", c);
	}
}


int pop(stack *stk){
	if(stk->cnt==0){
		printf("stack is empty");
		return -1;
	}else{
		int x=stk->top->data;
		node *temp=stk->top;
		stk->top=stk->top->next;
		free(temp);
		stk->cnt--;
		return x;
	}
}



void display(stack *stk){
	node *temp = stk->top;
	if(temp==NULL){
		printf("stack is empty");
		return;
	}else{
		while(temp!=NULL){
			printf("data: %d\n", temp->data);
			temp=temp->next;
		}
	}
	
}



int main(){
	
	stack stk;
	
	push(&stk, 7);
	push(&stk, 5);
	push(&stk, 9);
	
	display(&stk);
	
	printf("removed from stack: %d\n", pop(&stk));
	display(&stk);
	printf("removed from stack: %d\n", pop(&stk));
	display(&stk);
	
	return 0;
}
