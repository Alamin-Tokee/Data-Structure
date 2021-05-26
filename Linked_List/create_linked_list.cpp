#include <bits/stdc++.h>
using namespace std;

typedef struct node Node;

struct node{
	int data;
	Node *next;
};

Node *Create_Node(int item,Node* next){
	Node* new_node=(Node*)malloc(Node);

	if(new_node==NULL){
		printf("Error!!!");
		exit(1);
	}

	new_node->data=item;
	new_node->next=next;

	return new_node;
}

int main(){
	Node *node;

	node=Create_Node(15,NULL);
	printf("%d\n", node->data);

	return 0;
}