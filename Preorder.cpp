#include<bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node* left;
    struct Node* right;
    Node(int data) {	
        this->data = data;
        left = right = NULL;
   }
   };

void Preorder(Node* root) {
	
    stack<Node*> s;
    if (root != NULL)
    s.push(root);

    while (!s.empty()){
    Node* curr = s.top();
    s.pop();
    cout << curr->data << " ";

    if (curr->right != NULL)
    s.push(curr->right);
    if (curr->left != NULL)
    s.push(curr->left);
}
}

int main() {
	
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    Preorder(root);

    return 0;
}
