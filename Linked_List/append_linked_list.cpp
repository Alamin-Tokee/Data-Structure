#include <bits/stdc++.h>

typedef struct node Node;

struct node{
	int data;
	Node* next;
};

Node* CreateNode(int item,Node* next){
	Node* newnode=(Node*)malloc(Node);
	if(newnode==NULL){
		std::cout<< "Error"<<std::endl;
		exit(1);
	}
	newnode->data=item;
	newnode->next=next;
}

Node* append(int item,Node* head){
	Node* newnode=CreateNode(item,NULL);

	if(head==NULL) return newnode;

	Node* currentNode=head;

	while(currentNode->next!=NULL){
		currentNode=currentNode->next;
	}
	currentNode->next=newnode;

	return head;
}

int main(){
	Node* head, *n1, *n2;

	n1=CreateNode(10,NULL);

	head=n1;
	std::cout<< head->data <<std::endl;

	head=append(12,head);

	n2=head->next;

	std::cout<< n2->data << std::endl;


	return 0;
}