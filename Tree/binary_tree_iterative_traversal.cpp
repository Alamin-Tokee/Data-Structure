void iterativeInorder(Node* root){
	if(!root) return;

	stack<Node*>st;
	Node* curr=root;
	while(curr!=NULL || s.empty()==false){
		while(curr!=NULL){
			st.push(curr);
			curr=curr->left;
		}
		curr=st.top();
		st.pop();

		cout<<curr->data << '\n';

		curr=curr->right;
	}

}

void iterativePreorder(Node* root){
	if(root==NULL) return;

	stack<Node*>st;
	st.push(root);
	while(!st.empty()){
		Node* node=st.top();
		printf("%d\n",node->data);
		st.pop();

		if(node->right){
			st.push(node->right);
		}
		if(node->left){
			st.push(node->left);
		}
	}
}

void iterativePostorder(Node* root){
	if(root==NULL) return;

	stack<Node*>st,stt;
	st.push(root);
	while(!st.empty()){
		Node* node=st.top();
		stt.push(node);
		st.pop();

		if(node->left){
			st.push(node->left);
		}
		if(node->right){
			st.push(node->right);
		}
	}
	while(!stt.empty()){
		cout<<stt.top()<< '\n';
		stt.pop();
	}
}
