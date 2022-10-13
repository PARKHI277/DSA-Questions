#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
  int val;
  Node *next;
};
void push(Node** head, int new_data)
{
    Node* new_node = new Node();
    new_node->val = new_data;
    new_node->next = (*head);
    (*head) = new_node;
}

void printList(Node* node)
{
    while (node != NULL) {
        cout << node->val << " ";
        node = node->next;
    }
}

    void deleteNode(Node* node) {
         swap(node->val,node->next->val);
        Node*temp = node->next;
        node->next = node->next->next;
        delete(temp);
    }
 
int main()
{
     Node* head = NULL;
 
    push(&head, 7);
    push(&head, 1);
    push(&head, 3);
    push(&head, 2);
    push(&head, 8);
 
    cout << "Created Linked List: ";
    printList(head);
   
     

}