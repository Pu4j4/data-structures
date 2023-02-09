#include <bits/stdc++.h> 
using namespace std; 
// Node for Linked List
class Node  
{  
    public:
    int data; 
    Node* next;  
};  
// class for creating a LinkedList
void add(Node** head_ref, int val)  
{  
    // allocating new_node
    Node* new_node =new Node(); 
    new_node->data = val;  
    new_node->next = (*head_ref);  
    (*head_ref) = new_node;  
}  
int getNthNode(Node *head, int value){
Node *currentPointer = head;
int length = 0;
while (currentPointer != NULL) {
        if (length == value)
            return (currentPointer->data);
        length++;
        currentPointer = currentPointer->next;
}
    return -1;
}
int main(){
    //adding elements in the linkedList
    struct Node* head = NULL;
    add(&head, 20);
    add(&head, 76);
    add(&head, 54);
    add(&head, 74);
    add(&head, 64);
    //printing the Nth Node data
    printf("Nth Node data of LinkedList i: %d\n", getNthNode(head, 2));  
    return 0;
}