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
Node *reorderLL(Node *head)
{
    // can check if ll list has atleast 3 nodes
    // 1. Finding the middle element
    Node *slow = head;
    Node *fast = head;
    while (fast && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    // now slow is pointing to the middle element
    // 2. separate the ll list and reverse the second half
    Node *curr = slow->next;
    slow->next = NULL;
    Node *prev = slow;
    while (curr)
    {
        Node *nextPtr = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nextPtr;
    }
    // 3. merging the two half of ll list
    Node *ptr1 = head; // linked list first half
    Node *ptr2 = prev; // linked list second half
    while (ptr1 != ptr2)
    {
        Node *temp = ptr1->next;
        ptr1->next = ptr2;
        ptr1 = ptr2;
        ptr2 = temp;
    }
    return head;
}
int main()
{
    LinkedList ll;
    ll.insert(1);
    ll.insert(2);
    ll.insert(3);
    ll.insert(4);
    ll.insert(5);
    // ll.insert(6);
    ll.display();
    ll.head = reorderLL(ll.head);
    ll.display();
    return 0;
}