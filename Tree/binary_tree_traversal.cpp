#include <bits/stdc++.h>
using namespace std;

typedef struct node Node;

struct node{
	int data;
	Node* left;
	Node* right;
}

Node* createTree(int value){
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

void preOrder(Node* root){
	if(root==NULL)
		return;

	printf("%d\t",root->data);
	preOrder(root->left);
	preOrder(root->right);
}

void inOrder(Node* root){
	if(root==NULL)
		return;

	inOrder(root->left);
	printf("%d\t",root->data);
	inOrder(root->right);
}

void postOrder(root){
	if(root==NULL)
		return;

	postOrder(root->left);
	postOrder(root->left);
	printf("%d\t",root->data);
}

int main(){
	Node* root=createTree(1);
	root->left = createTree(2);
    root->right = createTree(3);
    root->left->left = createTree(4);
    root->left->right = createTree(5);

    printf("PreOrder Traversal\n");
    preOrder(root);
    cout<<'\n';

    printf("InOrder Traversal\n");
    inOrder(root);
    cout<<'\n';

    printf("PostOrder Traversal\n");
    postOrder(root);

    return 0;
}

