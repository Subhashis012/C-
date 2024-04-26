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
bool detectCycle(Node *head)
{
    if (!head)
    {
        return false;
    }
    Node *slow = head;
    Node *fast = head;
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast)
        {
            cout << "Cycle is present" << endl;
            cout << slow->val << endl;
            return true;
        }
    }
    return false;
}
void removeCycle(Node *head) // assuming that the ll list has a cycle
{
    Node *slow = head;
    Node *fast = head;
    do
    {
        slow = slow->next;
        fast = fast->next->next;
    } while (slow != fast);
    fast = head;
    while (fast->next != slow->next)
    {   // fast and slow will meet at the point of cycle
        fast = fast->next;
        slow = slow->next;
    }
    slow->next = NULL;
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
    ll.insert(7);
    ll.insert(8);
    // ll.display();
    ll.head->next->next->next->next->next->next->next->next = ll.head->next->next;
    cout << detectCycle(ll.head) << endl;
    removeCycle(ll.head);
    cout<<"After removing cycle: "<<endl;
    cout << detectCycle(ll.head) << endl;
    ll.display();
    return 0;
}