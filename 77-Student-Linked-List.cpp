#include <iostream>
#include <string>
using namespace std;

// Node structure to store student information
struct Node {
    int roll_no;
    string name;
    Node* next;

    Node(int r, string n) {
        roll_no = r;
        name = n;
        next = nullptr;
    }
};

// LinkedList class for managing the list of students
class LinkedList {
private:
    Node* head;

public:
    LinkedList() {
        head = nullptr;
    }

    // Insert a new node at a specified position
    void insert_at_position(int position, int roll_no, string name) {
        Node* new_node = new Node(roll_no, name);
        if (position == 0) {  // Insert at the head
            new_node->next = head;
            head = new_node;
            return;
        }

        Node* current = head;
        for (int i = 0; i < position - 1; i++) {
            if (current == nullptr) {
                cout << "Position out of bounds" << endl;
                delete new_node;
                return;
            }
            current = current->next;
        }

        new_node->next = current->next;
        current->next = new_node;
    }

    // Delete a node by roll number
    void delete_by_roll_no(int roll_no) {
        Node* current = head;
        Node* previous = nullptr;

        while (current != nullptr) {
            if (current->roll_no == roll_no) {
                if (previous == nullptr) {  // The node to delete is the head
                    head = current->next;
                } else {
                    previous->next = current->next;
                }
                delete current;
                cout << "Deleted roll no " << roll_no << endl;
                return;
            }
            previous = current;
            current = current->next;
        }

        cout << "Roll no " << roll_no << " not found" << endl;
    }

    // Reverse the linked list
    void reverse() {
        Node* previous = nullptr;
        Node* current = head;
        Node* next_node = nullptr;

        while (current != nullptr) {
            next_node = current->next;
            current->next = previous;
            previous = current;
            current = next_node;
        }
        head = previous;
    }

    // Display the linked list
    void display() {
        Node* current = head;
        while (current != nullptr) {
            cout << "Roll No: " << current->roll_no << ", Name: " << current->name << endl;
            current = current->next;
        }
    }
};

// Main function to demonstrate the functionality
int main() {
    LinkedList student_list;

    // Insert students
    student_list.insert_at_position(0, 1, "Alice");
    student_list.insert_at_position(1, 2, "Bob");
    student_list.insert_at_position(2, 3, "Charlie");
    student_list.insert_at_position(3, 4, "David");

    // Display the list
    cout << "Original List:" << endl;
    student_list.display();

    // Insert at a specific position
    student_list.insert_at_position(2, 5, "Eve");
    cout << "\nAfter inserting Eve at position 2:" << endl;
    student_list.display();

    // Delete a node by roll number
    student_list.delete_by_roll_no(3);
    cout << "\nAfter deleting Charlie (roll no 3):" << endl;
    student_list.display();

    // Reverse the list
    student_list.reverse();
    cout << "\nAfter reversing the list:" << endl;
    student_list.display();

    return 0;
}
