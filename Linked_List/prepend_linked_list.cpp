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

Node* prepend(int item,Node* head){
	Node* newnode=CreateNode(item,head);

	return newnode;
}

int main(){

	Node* n1,*n2,*head,*n3;

	n1=CreateNode(10,NULL);

	head=n1;

	head=prepend(12,head);

	n2=head;

	std::cout<< n2->data << std::endl;

	n3=n2->next;

	std::cout<< n3->data << std::endl;

	return 0;
}