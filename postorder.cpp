#include <bits/stdc++.h>
using namespace std;


struct Node {

	int data;
	Node *left, *right;
};

Node* createNode(int data)
{
	Node* node = new Node;
	node->data = data;
	node->left = node->right = NULL;
	return node;
}

void postOrderTraversal(Node* root)
{
	if (root == NULL)
		return;
	stack<Node *> stack1, stack2;
	stack1.push(root);
	Node* node;
	
	while (!stack1.empty()) {
		node = stack1.top();
		stack1.pop();
		stack2.push(node);
		if (node->left)
			stack1.push(node->left);
		if (node->right)
			stack1.push(node->right);
	}
	while (!stack2.empty()) {
		node = stack2.top();
		stack2.pop();
		cout << node->data << " ";
	}
}

int main()
{
	Node* root = NULL;
	root = createNode(1);
	root->left = createNode(2);
	root->right = createNode(3);
	root->left->right = createNode(5);
	root->right->left = createNode(6);

	postOrderTraversal(root);

	return 0;
}


