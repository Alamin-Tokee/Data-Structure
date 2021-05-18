#include <bits/stdc++.h>
#define STACK_SIZE 10

typedef struct{
	int top;
	int data[STACK_SIZE];
}Stack;

void push(Stack* s,int item){
	if(s->top < STACK_SIZE){
		s->data[s->top]=item;
		s->top=s->top+1;
	}else{
		printf("Stack is full!!\n");
	}
}

int pop(Stack* s){
	int item;
	if(s->top==0){
		printf("Stack is empty\n");
		return -1;
	}else{
		item=s->data[s->top];
		s->top=s->top-1;
	}
	return item;
}

int main(){
	Stack mystack;
	int item;

	mystack.top=0;

	push(&mystack,1);
	push(&mystack,2);
	push(&mystack,3);

	item=pop(&mystack);
	printf("%d\n",item);

	item=pop(&mystack);
	printf("%d\n",item);

	item=pop(&mystack);
	printf("%d\n",item);

	return 0;
}