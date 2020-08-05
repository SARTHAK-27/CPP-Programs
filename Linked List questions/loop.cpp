#include<iostream>
#include<unordered_set>
using namespace std;


struct node{
    int data;
    struct node*  next;
};

void push(struct node** head_ref, int new_data){
    struct node* new_node = (struct node*) malloc(sizeof(struct node));
    new_node->data = new_data;
    new_node ->next = *head_ref;
    (*head_ref) = new_node;
}

bool detectLoop(struct node* head){
    unordered_set<node*> s;
    while(head != NULL){
        if(s.find(head) != s.end()){
            return true;
        }
        s.insert(head);
        head = head->next;
    }
    return false;
}

int main() 
{ 
    /* Start with the empty list */
    struct node* head = NULL; 
  
    push(&head, 20); 
    push(&head, 4); 
    push(&head, 15); 
    push(&head, 10); 
  
    /* Create a loop for testing */
    head->next->next->next->next = head; 
  
    if (detectLoop(head)) 
        cout << "Loop found"; 
    else
        cout << "No Loop"; 
  
    return 0; 
}