#include <bits/stdc++.h>
using namespace std;

typedef struct node Node;

struct node{
	int data;
	Node* left;
	Node* right;
};

Node* CreateBinaryTree(int value){
	Node *newnode=(*Node)malloc(sizeof(Node));

	if(newnode==NULL){
		printf("Not create newnode!!!");
		exit(1);
	}
	newnode->data=value;
	newnode->left=NULL;
	newnode->right=NULL;

	return newnode;
}

void addLeftSubTree(Node* parent,Node* child){
	parent->left=child;
}
void addRightSubTree(Node* parent,Node* child){
	parent->right=child;
}

Node* TreeCreate(){
	Node* root=CreateBinaryTree(3);
	Node* two=CreateBinaryTree(2);
	Node* four=CreateBinaryTree(4);
	addLeftSubTree(root,two);
	addRightSubTree(root,four);

	Node* zero=CreateBinaryTree(0);
	Node* one=CreateBinaryTree(1);
	addLeftSubTree(two,zero);
	addRightSubTree(two,one);

	return root;
}

int main(){
	Node* root=TreeCreate();
	printf("%d\n",root->data);
	return 0;
}
