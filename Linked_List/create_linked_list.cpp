
//Using C 
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


//Using CPP
#include <bits/stdc++.h>
using namespace std;

// Creating a node
class Node {
  public:
    int value;
    Node* next;
};

int main() {
     Node* head;
     Node* one = NULL;
     Node* two = NULL;
     Node* three = NULL;

     // allocate 3 nodes in the heap
     one = new Node();
     two = new Node();
     three = new Node();

  
     one->value = 1;
     two->value = 2;
     three->value = 3;

     one->next = two;
     two->next = three;
     three->next = NULL;

     head = one;
     while (head != NULL) {
        printf("%d ", head->value);
        head = head->next;
     }
   
     return 0;
}