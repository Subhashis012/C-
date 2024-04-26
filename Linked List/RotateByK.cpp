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
Node *rotateByK(Node *head, int k)
{
    // 1. find length of ll
    int n = 0;
    // 2. find tail node
    Node *tail = head;
    while (tail->next)
    {
        n++; // finding the length
        tail = tail->next; // finding last node
    }
    n++; // for including last node
    k = k % n;
    if (k == 0)
    {
        return head;
    }
    tail->next = head;
    // 3. traversen-k nodes
    Node *temp = head;
    for (int i = 1; i < n - k; i++)
    {
        temp = temp->next;
    }
    // temp is now pointing to (n-k)th node
    Node *newhead = temp->next;
    temp->next = NULL;
    return newhead;
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
    ll.head = rotateByK(ll.head, 3);
    ll.display();
    return 0;
}