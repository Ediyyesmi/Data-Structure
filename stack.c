#include <stdio.h>
#define STACK_SIZE 4

typedef struct{
	int data[STACK_SIZE];
	int top;
}stack;


void push(stack *stk, int c){
	if(stk->top==STACK_SIZE-1){
		printf("\nstack dolu\n");
	}else{
		stk->top++;
		stk->data[stk->top]=c;
	}
}


int pop(stack *stk){
	if(stk->top==-1){
		printf("stack bos\n");
	}else{
		return(stk->data[stk->top--]); // En üstteki elemaný döndürür ve `top` deðerini bir azaltýr
	}
}


int main(){
	
	int x;
	stack n;
	n.top=-1; // stack'in baslangic durumunu ayarla
	
	push(&n, 7);
	push(&n, 5);
	push(&n, 9);
	
	x=pop(&n);
	printf("%d" ,x);
	
	return 0;
}
