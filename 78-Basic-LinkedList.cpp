#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* next;
};

// Function to print the linked list
void printList(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    Node* head = nullptr;
    Node* two = nullptr;
    Node* three = nullptr;

    // Allocation in heap using new
    head = new Node();
    two = new Node();
    three = new Node();
    
    // Data seeding
    head->data = 1;
    head->next = two;
    
    two->data = 2;
    two->next = three;
    
    three->data = 3;
    three->next = nullptr;

    // Print the linked list
    printList(head);

    // Free allocated memory
    delete head;
    delete two;
    delete three;

    return 0;
}
