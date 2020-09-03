//Check whether a given Binary Tree is Complete or not | Set 1 (Iterative Solution)
//Given a Binary Tree, write a function to check whether the given Binary Tree is Complete Binary Tree or not

#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* left;
    node* right;
};

node* newNode(int data){
    node* Node = new node();
    Node->data = data;
    Node->left = NULL;
    Node->right = NULL;

    return(Node);
 }

 bool isCompleteBT(node* root){
     if(root == NULL){
         return true;
     }

     queue<node *> q;
     q.push(root);
     bool flag = false;
 }

int main() 
{ 
    /* Let us construct the following Binary Tree which 
        is not a complete Binary Tree 
             1 
            / \ 
            2  3 
           / \  \ 
          4   5  6 
        */
  
    node *root = newNode(1); 
    root->left     = newNode(2); 
    root->right = newNode(3); 
    root->left->left = newNode(4); 
    root->left->right = newNode(5); 
    root->right->left = newNode(6); 
  
    if ( isCompleteBT(root) == true ) 
        cout << "Complete Binary Tree"; 
    else
        cout << "NOT Complete Binary Tree"; 
  
    return 0; 
}