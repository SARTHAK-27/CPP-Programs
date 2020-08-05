#include<iostream>
using namespace std;

class node{
    public:
        int data;
        node* next;
};

void print(node* n){
    while(n != NULL){
        cout<< n ->data <<" ";
        n = n ->next;
    }
}

int main(){
    node* head = NULL;
    node* sec = NULL;
    node* third = NULL;

    head = new node();
    sec = new node();
    third = new node();

    head -> data = 1;
    head -> next = sec;

    sec -> data = 2;
    sec -> next = third;

    third -> data = 3;
    third -> next = NULL;

    print(head);

    return 0;
}