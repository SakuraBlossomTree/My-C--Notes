#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *left, *right;

};

Node* newNode(int data){
    
    Node* node = new Node;

    node->data = data;

    node->left = node->right = nullptr;

    return node;

};

Node* insertNode(Node* root, int key){
    
    Node* newnode = newNode(key);

    Node* parent = nullptr;
    Node* current = root;

    if (root == nullptr){
        return newnode;
    }

    while(current != nullptr){

        parent = current;
        if(key < current->data){
            current = current->left;
        } else if (key > current->data){
            current = current->right;
        } else{
            return root;
        }

    }

    if(key < parent->data){
        parent->left = newnode;
    } else{
        parent->right = newnode;
    }

    return root;

}

bool search(Node* root, int val){

    Node* current = root;

    while(current!=nullptr){
    
        if(val == current->data){
            return true;
        } else if (val < current->data){
            current = current->left; 
        } else{
            current = current->right;
        }

    }

    return false;

}

void preOrder(Node* root){

    if (root){
        cout<< root->data<< " ";
        preOrder(root->left);
        preOrder(root->right);
    }
}

int main(){

    Node* root = nullptr;
    root = insertNode(root, 4);
    insertNode(root, 3);
    insertNode(root, 5);
    insertNode(root, 2);
    insertNode(root, 1);
    insertNode(root, 6); 

    preOrder(root);

    if(search(root,10)){
        cout<<"Value found"<<endl;
    }
    else{
        cout<<"Value not found"<<endl;
    }
    return 0;
}
