#include <bits/stdc++.h>
using namespace std;

struct Node{
    
    int data;
    Node *left, *right;

    Node(int data){
        this->data = data;
        this->left = this->right = nullptr;
    };

};

void preorder(Node* root){

    if (root == nullptr){
        return;
    }

    stack<Node*> s; // s is a stack which has Node datatype
    s.push(root);

    while(!s.empty()){

        Node* curr = s.top();
        s.pop();
        cout<<curr->data<<" ";

        if(curr->right != nullptr){
            s.push(curr->right);
        }
        if(curr->left != nullptr){
            s.push(curr->left);
        }

    };

}

int main(){

    /*
        
        
       1

     2  3

   4  5   6


    */
    
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->right = new Node(6);

    preorder(root);

    return 0;
}
