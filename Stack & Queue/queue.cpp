#include <bits/stdc++.h>
#define QUEUE_SIZE 5

typedef struct {
	int data[QUEUE_SIZE+1];
	int head,tail;
}Queue;

void enqueue(Queue* q,int item){
	if(((q->tail+1)%(QUEUE_SIZE+1))==q->head){
		std::cout<<"Queue is full\n";
		return;
	}else{
		q->data[q->tail]=item;
		q->tail=(q->tail+1)%(QUEUE_SIZE+1);
	}
}

int dequeue(Queue* q){
	int item;
	if(q->tail==q->head){
		cout<<"Queue is empty!!!\n";
		return -1;
	}else{
		item=q->data[q->head];
		q->head=(q->head+1)%(QUEUE_SIZE+1);
	}

	return item;
}

int main(){
	Queue queue;
	int item;

	queue.tail=0;
	queue.head=0;

	enqueue(&queue,1);
	std::cout<< queue.tail << '\n';

	enqueue(&queue,2);
	std::cout<< queue.tail << '\n';

	enqueue(&queue,3);
	std::cout<< queue.tail << '\n';

	item=dequeue(&queue);
	std::cout<< item << '\n';


	item=dequeue(&queue);
	std::cout<< item << '\n';


	item=dequeue(&queue);
	std::cout<< item << '\n';

	return 0;
}
