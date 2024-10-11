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
        // Deleting Head Node.
        void headDel(){
            if (head != NULL){
                node *temp = head;
                head = head->next;
                delete temp;
                cout << "Element deleted from head\n";
            } else{
                cout << "Head Node is Empty.";
            }
        }

        // Deleting the Last Node.
        void lastDel(){
            node* temp = head;
            node* prev = NULL;
            while(temp->next != NULL){
                prev = temp;
                temp = temp->next;
            }
            prev->next = NULL;
            delete temp;
            
            cout << "Last Node deleted\n";
        }

        // Deleting Particular element.
        void partDel(){
            node* temp = head;
            node* prev = NULL;
            int el;
            cout << "Enter element to delete: ";
            cin >> el;
            while(temp->data != el){
                prev = temp;
                temp = temp->next;
            }
            prev->next = temp->next;
            delete temp;
            cout << "Element deleted\n";
        }

        // Display the linked list
        void display(){
            node* temp = head;  // Use a temporary pointer to traverse the list
            cout << "Here's the elements: ";
            while(temp != NULL){
                cout << temp->data << " ";
                temp = temp->next;
            }
            cout << endl;
        }
};

int main(){
    ops obj;
    int opt;
    char a;
    while(a != 'N'){
        cout << "\n1. Add at Head Node\n2. Add at Last Node\n3. Add after Particular Element\n4. Delete Head Node\n5. Delete Tail Node\n6. Delete Particular Element\n7. Display Elements\n8. Exit\nEnter Your choice:  ";
        cin >> opt;
        switch(opt){
            case 1: obj.addFront(); break;
            case 2: obj.addLast(); break;
            case 3: obj.addMid(); break;
            case 4: obj.headDel(); break;
            case 5: obj.lastDel(); break;
            case 6: obj.partDel(); break;
            case 7: obj.display(); break;
            case 8: return 0;
            default: cout << "Invalid Choice!"; break;
        }
        cout << "Do you want to continue[Y/N]: ";
        cin >> a;
    }
    return 0;
}
