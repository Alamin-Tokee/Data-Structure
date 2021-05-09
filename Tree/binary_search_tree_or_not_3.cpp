#include <bits/stdc++.h>
using namespace std;

struct Node{
	int val
	Node* left;
	Node* right;
}

void inOrder(Node* root,vector<int>& vec){
	if(!root) return;

	inOrder(root->left);
	vec.push_back(root->val);
	inOrder(root->right);
}

bool isBinarySearchTree(Node* root){
	if(!root) return true;
	vector<int>vec;
	inOrder(root,vec);

	for(int i=1;i<vec.size();i++){
		if(vec[i]<vec[i-1]) return false;
	}
	return true;
}

struct Node* newNode(int data){
	struct Node* node=new Node;
	node->val=data;
	node->left=node->right=NULL;
	return (node);
}

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


//Time Complexity O(n)
//Space Complexity O(n)