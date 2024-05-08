#include<iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
    
    Node(int value) {
        data = value;
        left = nullptr;
        right = nullptr;
    }
};

Node* insert(Node* root, int value){
if(root==nullptr){
    return new Node(value);
}
if (value < root->data) {
        root->left = insert(root->left, value);
    } else {
        root->right = insert(root->right, value);
    }

    return root;
}
void inorderTraversal(Node* root){
    if(root == nullptr){
        return;
    }
    if()
}

int main(){

}