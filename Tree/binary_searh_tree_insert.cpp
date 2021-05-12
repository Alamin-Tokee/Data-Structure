#include <bits/stdc++.h>
using namespace std;
typedef struct node Node;
struct node{
	int data;
	Node* left;
	Node* right;
};

Node* newNode(int val){
	Node* newnode=(Node*)malloc(sizeof(Node));
	if(newnode==NULL){
		printf("Error");
		exit(1);
	}
	newnode->data=val;
	newnode->left=NULL;
	newnode->right=NULL;

	return newnode;
}

Node* Insert(Node* root,int val){
	if(root==NULL){
		root=newNode(val);
		return root;
	}
	else if(root->data>=val){
		root->left=Insert(root->left,val);
	}
	else{
	    root->right=Insert(root->right,val);
    }
	return root;
}

bool Search(Node* root,int val){
	if(root==NULL) return false;
	else if(root->data=val) return true;
	else if (val <= root->data) return Search(root->left,val);
	else return Search(root->right,val);
}

int main(){
	Node* root=NULL;
	root=Insert(root,15);
	root=Insert(root,10);
	root=Insert(root,20);
	root=Insert(root,25);
	root=Insert(root,8);
	root=Insert(root,12);

	int number;
	cin>>number;
	if(Search(root,number)==true) printf("Found");
	else printf("Not Found");

	return 0;
}