// EXPERIMENT- 4
//  4. Create a circular linked list having information about a college and perform insertion at
//  front perform deletion at end.
//  INPUT
#include <iostream>
#include <string>
using namespace std;
struct College
{
    string name;
    string address;
    int establishedYear;
    College *next;
};
class CircularLinkedList
{
private:
    College *last;

public:
    CircularLinkedList() : last(NULL) {}
    void insertAtFront(string name, string address, int establishedYear)
    {
        College *newCollege = new College();
        newCollege->name = name;
        newCollege->address = address;
        newCollege->establishedYear = establishedYear;
        if (last == NULL)
        {
            last = newCollege;
            last->next = last;
        }
        else
        {
            newCollege->next = last->next;
            last->next = newCollege;
        }
        cout << "Inserted at front: " << name << endl;
    }
    void deleteAtEnd()
    {
        if (last == NULL)
        {
            cout << "List is empty, nothing to delete." << endl;
            return;
        }
        if (last->next == last)
        {
            cout << "Deleted: " << last->name << endl;
            delete last;
            last = NULL;
        }
        else
        {
            College *temp = last->next;
            while (temp->next != last)
            {
                temp = temp->next;
            }
            temp->next = last->next;
            cout << "Deleted: " << last->name << endl;
            delete last;
            last = temp;
        }
    }
    void displayList()
    {
        if (last == NULL)
        {
            cout << "List is empty." << endl;
            return;
        }
        College *temp = last->next;
        do
        {
            cout << "College: " << temp->name << ", Address: " << temp->address
                 << ", Established: " << temp->establishedYear << endl;
            temp = temp->next;
        } while (temp != last->next);
    }
};
int main()
{
    CircularLinkedList collegeList;
    // Inserting college
    collegeList.insertAtFront("DTC College", "Greater Noida", 2013);
    collegeList.insertAtFront("XYZ University", "Noida", 2001);
    collegeList.insertAtFront("LMN Institute", "Delhi", 1997);
    cout << "\nCurrent List:" << endl;
    collegeList.displayList();
    // Deleting college last.
    collegeList.deleteAtEnd();
    cout << "\nList after deletion at the end:" << endl;
    collegeList.displayList();
    return 0;
}