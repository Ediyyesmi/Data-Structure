#include <stdio.h>
#include <stdlib.h>
#define QUEUE_SIZE 5


typedef struct node {
    int data;
    struct node *next;
} node;


typedef struct{
	struct node *front;
	struct node *rear;
	int cnt;
}queue;


void initialize(queue *q){
	q->cnt=0;
	q->front = q->rear = NULL;
}

int isEmpty(queue *q){
	if(q->cnt==0){
		return 1;
	}else{
		return 0;
	}
}

int isFull(queue *q){
	if(q->cnt==QUEUE_SIZE){
		return 1;
	}else{
		return 0;
	}
}


void enqueue(queue *q, int x){
	if(isFull(q)==1){
		printf("queue is full");
	}else{
		struct node *temp = (struct node*)malloc(sizeof(node));
		temp->data=x;
		temp->next=NULL;
		if(isEmpty(q)==1){
			q->front=q->rear=temp;
		}else{
			q->rear->next=temp;
			q->rear=temp;
		}
		q->cnt++;
	}	
}


int dequeue(queue *q){
	if(isEmpty(q)==1){
		printf("queue is empty");
	}else{
		struct node *temp = q->front;
		int x = temp->data;
		q->front = temp->next;
		free(temp);
		q->cnt--;
		return x;
	}
}



int main(){
	
	queue q;
	initialize(&q);
	
	enqueue(&q, 10);
    enqueue(&q, 20);
    enqueue(&q, 30);
    
    printf("Dequeued: %d\n", dequeue(&q)); 
    printf("Dequeued: %d\n", dequeue(&q)); 
	
	
	return 0;
}
