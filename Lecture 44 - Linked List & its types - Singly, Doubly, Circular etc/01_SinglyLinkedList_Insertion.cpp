#include <iostream>
using namespace std;

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

void InsertAtHead(Node *&head, int d)
{
    // new node create
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
}

void InsertAtTail(Node *&tail, int d)
{
    // new node create
    Node *temp = new Node(d);
    tail->next = temp;
    tail = tail->next; // or tail = temp;
}

void InsertAtPosition(Node *&tail, Node *&head, int position, int d)
{
    // inserting at start position
    if (position == 1)
    {
        InsertAtHead(head, d);
        return;
    }

    Node *temp = head;
    int count = 1;

    // inserting at last position
    if (temp->next == NULL)
    {
        InsertAtTail(tail, d);
        return;
    }
    while (count != position - 1)
    {
        temp = temp->next;
        ++count;
    }
    // creating a node for d
    Node *NodeToAdd = new Node(d);
    NodeToAdd->next = temp->next;
    temp->next = NodeToAdd;
}

void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL\n";
}

int main()
{
    // created new node
    Node *node1 = new Node(10);
    cout << node1->data << endl;
    cout << node1->next << endl;

    // head pointed to node1
    Node *head = node1;
    print(head);
    // initially head = tail = node1
    Node *tail = node1;

    InsertAtHead(head, 12);
    print(head);

    InsertAtHead(head, 16);
    print(head);

    InsertAtTail(tail, 100);
    print(head);

    InsertAtPosition(tail, head, 3, 66);
    print(head);

    InsertAtPosition(tail, head, 1, 66);
    print(head);

    InsertAtPosition(tail, head, 7, 69);
    print(head);

    cout << "Head = " << head->data << endl;
    cout << "Tail = " << tail->data << endl;
}
/*
OUTPUT

10
0
10->NULL
12->10->NULL
16->12->10->NULL
16->12->10->100->NULL
16->12->66->10->100->NULL
66->16->12->66->10->100->NULL
66->16->12->66->10->100->69->NULL
Head = 66
Tail = 100
*/