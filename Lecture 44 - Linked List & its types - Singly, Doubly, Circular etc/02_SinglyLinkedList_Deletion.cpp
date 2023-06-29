#include <iostream>
using namespace std;

// creating node
class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

// linked list class
class LinkedList
{
private:
    Node *head;

public:
    LinkedList()
    {
        head = NULL;
    }

    // insert node at the beginning of the linked list
    void insertAtBeginning(int data)
    {
        Node *newNode = new Node(data);
        newNode->next = head;
        head = newNode;
    }

    // insert node at the end of the linked list
    void insertAtEnd(int data)
    {
        Node *newNode = new Node(data);
        if (head == NULL)
        {
            head = newNode;
        }
        else
        {
            Node *current = head;
            while (current->next != NULL)
            {
                current = current->next;
            }
            current->next = newNode;
        }
    }

    // delete node at the beginning of the linked list
    void deleteAtBeginning()
    {
        if (head == NULL)
        {
            cout << "Linked list is empty. No element to delete." << endl;
            return;
        }
        Node *temp = head;
        head = head->next;
        delete temp;
    }

    // delete node at the end of the linked list
    void deleteAtEnd()
    {
        if (head == NULL)
        {
            cout << "Linked list is empty. No element to delete." << endl;
            return;
        }
        if (head->next == NULL)
        {
            delete head;
            head = NULL;
            return;
        }
        Node *current = head;
        Node *previous = NULL;
        while (current->next != NULL)
        {
            previous = current;
            current = current->next;
        }
        delete current;
        previous->next = NULL;
    }

    // delete node at a specific position in the linked list
    void deleteAtPosition(int position)
    {
        if (head == NULL)
        {
            cout << "Linked list is empty. No element to delete." << endl;
            return;
        }
        if (position == 1)
        {
            Node *temp = head;
            head = head->next;
            delete temp;
            return;
        }
        Node *current = head;
        Node *previous = NULL;
        int count = 1;
        while (current != NULL && count < position)
        {
            previous = current;
            current = current->next;
            count++;
        }
        if (current == NULL)
        {
            cout << "Invalid position. No element found at position " << position << "." << endl;
            return;
        }
        previous->next = current->next;
        delete current;
    }

    // delete node with a specific data value in the linked list
    void deleteWithValue(int value)
    {
        if (head == NULL)
        {
            cout << "Linked list is empty. No element to delete." << endl;
            return;
        }
        if (head->data == value)
        {
            Node *temp = head;
            head = head->next;
            delete temp;
            return;
        }
        Node *current = head;
        Node *previous = NULL;
        while (current != NULL && current->data != value)
        {
            previous = current;
            current = current->next;
        }
        if (current == NULL)
        {
            cout << "Element with value " << value << " not found in the linked list." << endl;
            return;
        }
        previous->next = current->next;
        delete current;
    }

    // display the linked list
    void display()
    {
        if (head == NULL)
        {
            cout << "Linked list is empty." << endl;
            return;
        }
        Node *current = head;
        cout << "Linked List: ";
        while (current != NULL)
        {
            cout << current->data << "->";
            current = current->next;
        }
        cout << "NULL\n"
             << endl;
    }
};

int main()
{
    LinkedList list;
    list.insertAtBeginning(5);
    list.insertAtBeginning(3);
    list.insertAtEnd(7);
    list.insertAtEnd(9);

    list.display();

    // Delete at beginning
    cout << "Deletion at beginning\n";
    list.deleteAtBeginning();
    list.display();

    // Delete at end
    cout << "Deletion at end\n";
    list.deleteAtEnd();
    list.display();

    // Delete at position
    cout << "Deletion at position 2\n";
    list.deleteAtPosition(2);
    list.display();

    // Delete with value
    cout << "Deleting node with value 7\n";
    list.deleteWithValue(7);
    list.display();

    return 0;
}
/*
OUTPUT

Linked List: 3->5->7->9->NULL

Deletion at beginning
Linked List: 5->7->9->NULL

Deletion at end
Linked List: 5->7->NULL

Deletion at position 2
Linked List: 5->NULL

Deleting node with value 7
Element with value 7 not found in the linked list.
Linked List: 5->NULL

*/