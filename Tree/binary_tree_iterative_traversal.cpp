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