#include <iostream>
using namespace std;

class node{
    public:
        int data;
        node* next;
        node(int val){
            data = val;
            next = NULL;
        }
};

class ops{
    private:
        int n, a;
    public:
        node* head;
        
        // Constructor to initialize head pointer
        ops() {
            head = NULL;
        }
        
        // Insertion at Head Node
        void addFront(){
            cout << "Enter number of Elements on Head: ";
            cin >> n;
            for(int i = 0; i < n; i++){
                cout << "Enter element: ";
                cin >> a;
                if(head == NULL){
                    head = new node(a);
                } else{
                    node* temp = new node(a);
                    temp->next = head;
                    head = temp;
                }
            }
        }

        // Adding elements at Last node.
        void addLast(){
            cout << "Enter number of elements on Tail: ";
            cin >> n;
            for(int i = 0; i < n; i++){
                cout << "Enter element: ";
                cin >> a;
                if(head == NULL){
                    head = new node(a);
                } else{
                    node* tail = head;
                    while(tail->next != NULL){
                        tail = tail->next;
                    }
                    node* temp = new node(a);
                    tail->next = temp;
                    temp->next = NULL;
                }
            }
        }
        // Insertion in Middle of element.
        void addMid(){
            cout << "Enter number of elements to insert: ";
            cin >> n;
            int p;
            for(int i = 0; i <  n; i++){
                cout << "Enter place to insert: ";
                cin >> p;
                cout << "Enter element to insert: ";
                cin >> a;
                node* tail = head;
                while(tail->data != p){
                    tail = tail->next;
                }
                node* temp = new node(a);
                temp->next = tail->next;
                tail->next = temp;
            }
            
        }

        // Display the linked list
        void display(){
            node* temp = head;  // Use a temporary pointer to traverse the list
            cout << "Here's the added elements: ";
            while(temp != NULL){
                cout << temp->data << " ";
                temp = temp->next;
            }
            cout << endl;
        }
};

int main(){
    ops obj;
    obj.addFront();
    obj.display();
    obj.addLast();
    obj.display();
    obj.addMid();
    obj.display();
    return 0;
}
