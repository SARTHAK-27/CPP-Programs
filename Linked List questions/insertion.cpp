#include<iostream>
using namespace std;

class node{
    public:
        int data;
        node *next;
};

// To insert node at the beginning
void push(node** head_ref, int new_data){
    node* new_node = new node();
    new_node -> data = new_data;
    new_node -> next = (*head_ref);
    (*head_ref) = new_node;
}

//To insert node in the middle
void insertAfter(struct node* prev_node, int new_data){
    if(prev_node == NULL){
        cout<<"The previous node can not be null";
        return ;
    }

    struct node* new_node = (struct node*) malloc(sizeof(struct node));
    new_node -> data = new_data;
    new_node->next = prev_node->next;
    prev_node->next = new_node;
}

//To insert in the end 
void append(struct node** head_ref, int new_data){
    struct node* new_node = (struct node*) malloc(sizeof(struct node));
    struct node *last = *head_ref;
    new_node -> data = new_data;
    new_node -> next = NULL;

    if(*head_ref == NULL){
        *head_ref = new_node;
        return ;
    }

    while(last->next != NULL){
        last = last->next;
    }

    last -> next = new_node;
    return ;
}

void printList(node *n){
    while(n != NULL){
        cout<< n->data <<" ";
        n = n -> next;
    }
}

int main()  
{  
    /* Start with the empty list */
    node* head = NULL;  
      
    // Insert 6. So linked list becomes 6->NULL  
    append(&head, 6);  
      
    // Insert 7 at the beginning.  
    // So linked list becomes 7->6->NULL  
    push(&head, 7);  
      
    // Insert 1 at the beginning.  
    // So linked list becomes 1->7->6->NULL  
    push(&head, 1);  
      
    // Insert 4 at the end. So  
    // linked list becomes 1->7->6->4->NULL  
    append(&head, 4);  
      
    // Insert 8, after 7. So linked  
    // list becomes 1->7->8->6->4->NULL  
    insertAfter(head->next, 8);  
      
    cout<<"Created Linked list is: ";  
    printList(head);  
      
    return 0;  
}