#include <iostream>
using namespace std;
class Node
{
public:
    int val;
    Node *prev;
    Node *next;
    Node(int data)
    {
        val = data;
        prev = NULL;
        next = NULL;
    }
};
class DoublyLL
{
public:
    Node *head;
    Node *tail;
    DoublyLL()
    {
        head = NULL;
        tail = NULL;
    }

    void display()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->val << "<->";
            temp = temp->next;
        }
        cout << endl;
    }
    void insertAtEnd(int val)
    {
        Node *new_node = new Node(val);
        if (tail == NULL)
        {
            head = new_node;
            tail = new_node;
            return;
        }
        tail->next = new_node;
        new_node->prev = tail;
        tail = new_node;
        return;
    }
};
void reverseDll(Node *&head, Node *&tail)
{
    Node *currPtr = head;
    while(currPtr)
    {
        Node * nextPtr = currPtr->next;
        currPtr->next = currPtr->prev;
        currPtr->prev = nextPtr;
        currPtr = nextPtr;
    }
    // swapping head and tail pointers
    Node *newHead = tail;
    tail = head;
    head = newHead;
}
int main()
{

    DoublyLL dll;
    dll.insertAtEnd(1);
    dll.insertAtEnd(2);
    dll.insertAtEnd(3);    
    dll.insertAtEnd(4);    
    dll.display();
    reverseDll(dll.head, dll.tail);
    dll.display();
    
    return 0;
}