// Insertion in linked list is generally done via three ways.
// 1. Insertion at head node.
// 2. Insertiona at the last of linkedlist
// 3. Insertiona in between two nodes.


// Insertion at head node.
#include <iostream>
using namespace std;
class Node{
    public:
        int data;
        int *next;
        Node(int val){
            data = val;
            next = NULL;
        }
};
int main(){
    Node *head;
    if(head == NULL){
        head = new Node(4);
    } else{
        Node *temp;
        temp = new Node(8);
        temp->next = head;
        temp = head;
    }
    return 0;
}