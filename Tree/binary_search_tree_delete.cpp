#include <bits/stdc++.h>
using namespace std;

typedef struct node Node;

struct node{
	int data;
	Node* left;
	Node* right;
}
Node* FindMin(Node* root){
	if(!root->left) return root;
	return FindMin(root->left);
}
Node* Delete(Node* root,int val){
	if(root==NULL) return root;
	else if(root->data < val){
		return Delete(root->right,val);
	}else if(root->data > val){
		return Delete(root->left,val);
	}else{
		if(root->left==NULL && root->right==NULL){
			delete root;
			root=NULL;
			return root;
		}else if(root->left==NULL){
			Node* temp=root;
			root=root->right;
			delete temp;
			return root;
		}else if(root->right==NULL){
			Node* temp=root;
			root=root->left;
			delete temp;
			return root;
		}else{
			Node* temp=FindMin(root);
			root->data=temp->data;
			root->right=Delete(root->right,temp->data);
		} 
	}
}
Node* CreateNode(int val){
	Node* newnode=(Node*)malloc(sizeof(Node));
	newnode->data=val
	newnode->left=newnode->right=NULL;

	return newnode;
}
Node* insert(Node* root,int val){
	if(root==NULL){
		root=CreateNode(val);
		return root;
	}
	else if(root->data > val){
		root->left=insert(root->left,val);
	}else{
		root->right=insert(root->right,val);
	}
	return root;
}

void Inorder(Node* root){
	if(!root) return;

	Inorder(root->left);
	printf("%d\n",root->data);
	Inorder(root->right);
}

int main(){
	/* Let us create following BST
            50
        /     \
        30     70
        / \ / \
      20 40 60 80 */
    Node* root = NULL;
    root = insert(root, 50);
    root = insert(root, 30);
    root = insert(root, 20);
    root = insert(root, 40);
    root = insert(root, 70);
    root = insert(root, 60);
    root = insert(root, 80);
 
    cout << "Inorder traversal of given tree\n";
    inorder(root);
 
    cout << "\nDelete 20\n";
    root = Delete(root, 20);
    cout << "Inorder traversal of the modified tree \n";
    inorder(root);
 
    cout << "\nDelete 30\n";
    root = Delete(root, 30);
    cout << "Inorder traversal of the modified tree \n";
    inorder(root);
 
    cout << "\nDelete 50\n";
    root = Delete(root, 50);
    cout << "Inorder traversal of the modified tree \n";
    inorder(root);

    return 0;
}