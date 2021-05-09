#include<bits/stdc++.h>
using namespace std;

struct Node{
	int data;
	Node* left;
	Node* right;
};

bool binaryTreeUtill(Node* root,int minValue,int maxValue){
	if(!root) return true;

	if(root->data < minValue && root->data > maxValue && binaryTreeUtill(root->left,minValue,root->data) && binaryTreeUtill(root->right,root->data,maxValue))
		return true;
	else
		return false;
}

bool isBinarySearchTree(Node* root){
	if(!root) return true;

	return binaryTreeUtill(root,INT_MIN,INT_MAX);
}

struct Node* newNode(int data){
	struct Node* node =new Node;
	node->data=data;
	node->left=node->right=NULL;
	return (node);
};
int main(){
	struct Node* root=newNode(3);
	root->left=newNode(2);
	root->right=newNode(5);
	root->left->left=newNode(1);
	root->left->right=newNode(4);

	if(isBinarySearchTree(root))
		cout<< "Is BST";
	else
		cout<< "Not a BST";

	return 0;
}