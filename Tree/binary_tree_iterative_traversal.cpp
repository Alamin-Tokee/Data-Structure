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

