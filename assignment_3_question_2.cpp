#include <iostream>
using namespace std;
 
/* Link list node */
struct Node {
    int data;
    struct Node* next;
    Node(int data)
    {
        this->data = data;
        next = NULL;
    }
};
 
struct LinkedList {
    Node* head;
    LinkedList() { head = NULL; }
 
    /* Function to reverse the linked list */
    void reverse()
    {
        // Initialize current, previous and
        // next pointers
        Node* current = head;
        Node *prev = NULL, *next = NULL;
 
        while (current != NULL) {
            // Store next
            next = current->next;
 
            // Reverse current node's pointer
            current->next = prev;
 
            // Move pointers one position ahead.
            prev = current;
            current = next;
        }
        head = prev;
    }
 
    /* Function to print linked list */
    void print()
    {
        struct Node* temp = head;
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
    }
 
    void push(int data)
    {
        Node* temp = new Node(data);
        temp->next = head;
        head = temp;
    }
};
 

int main()
{
    /* Start with the empty list */
    LinkedList ll;
    ll.push(4);
    ll.push(3);
    ll.push(2);
    ll.push(1);
 
    cout << "Head of the following linked list\n";
    ll.print();
 
    ll.reverse();
 
    cout << "\n Linked list changed to  \n";
    ll.print();
    return 0;
}