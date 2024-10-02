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
        void addFront(){
            cout << "Enter number of Elements: ";
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
        void display(){
            cout << "Here's the added elements: ";
            while(head != NULL){
                cout << head->data << " ";
                head = head->next;
            }
        }
};
int main(){
    ops obj;
    obj.addFront();
    obj.display();
    return 0;
}