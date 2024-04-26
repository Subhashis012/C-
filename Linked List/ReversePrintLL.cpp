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
void reversePrint(Node *head)
{
    // base case
    if(head == NULL)
    {
        return;
    }
    // recursive case
    reversePrint(head->next);
    cout << head->val << " ";
}
int main()
{
    LinkedList ll;
    ll.insert(1);
    ll.insert(2);
    ll.insert(3);
    ll.insert(4);
    ll.display();
    reversePrint(ll.head);
    cout << endl;
    return 0;
}