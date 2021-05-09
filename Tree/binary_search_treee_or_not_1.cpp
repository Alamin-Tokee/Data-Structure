#include<bits/stdc++.h>
using namespace std;

struct Node{
	int data;
	Node* left;
	Node* right;
};
bool isBinaryGreater(Node* root,value){
	if(root==NULL) return true;

	if(root->data > value && isBinaryGreater(root->left,value) && isBinaryGreater(root->right,value)){
		return true;
	}
	else
	    return false;
}
bool isBinaryLesser(Node* root,value){
	if(root==NULL) return true;

	if(root->data < value && isBinaryLesser(root->left,value) && isBinaryLesser(root->right,value)){
		return true;
	}
	else
	    return false;
}
bool isBinarySearchTree(Node* root){
	if(root==NULL) return true;

	if(isBinaryLesser(root->left,root->data) && isBinaryGreater(root->right,root->data) && isBinarySearchTree(root->left) && isBinarySearchTree(root->right)){
		return true;
	}
	else 
		return false;
}

struct Node* newNode(int data){
	struct Node* node=new Node;
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