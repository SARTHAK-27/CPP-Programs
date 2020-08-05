#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node(int d){
            data = d;
        }
        Node *ptr;
};

bool isPalin(Node* head){
}

int main(){ 
  
    // Addition of linked list  
    Node one =  Node(1); 
    Node two = Node(2); 
    Node three = Node(3); 
    Node four = Node(2); 
    Node five = Node(1); 
  
    // Initialize the next pointer 
    // of every current pointer  
    five.ptr = NULL; 
    one.ptr = &two; 
    two.ptr = &three; 
    three.ptr = &four; 
    four.ptr = &five; 
    Node* temp = &one; 
  
      
    // Call function to check palindrome or not  
    int result = isPalin(&one); 
    
    if(result == 1) 
            cout<<"isPalindrome is true\n"; 
    else
        cout<<"isPalindrome is true\n"; 
  
return 0; 
} 