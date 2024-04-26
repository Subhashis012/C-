#include <iostream>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node(int data)
    {
        val = data;
        next = NULL;
    }
};
class LinkedList
{
public:
    Node *head;
    LinkedList()
    {
        head = NULL;
    }
    void insert(int data)
    {
        Node *new_node = new Node(data);
        if (head == NULL)
        { // Linked list is empty
            head = new_node;
            return;
        }
        Node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = new_node;
    }
    void display()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->val << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};
Node *reversekLL(Node *&head, int k)
{
    Node *prevptr = NULL;
    Node *currptr = head;
    int counter = 0; // for counting first k nodes
    while (currptr != NULL && counter < k) // reversing first k nodes
    { 
        Node *nextptr = currptr->next;
        currptr->next = prevptr;
        prevptr = currptr;
        currptr = nextptr;
        counter++;
    }
    // currptr will give us (k+1)th node
    if (currptr != NULL)
    {
        Node *new_head = reversekLL(currptr, k);
        head->next = new_head;
    }
    return prevptr; // prev pointer will give us new_head of connected linked list
}
int main()
{
    LinkedList ll;
    ll.insert(1);
    ll.insert(2);
    ll.insert(3);
    ll.insert(4);
    ll.insert(5);
    ll.insert(6);
    ll.display();
    ll.head = reversekLL(ll.head, 3);
    ll.display();
    return 0;
}