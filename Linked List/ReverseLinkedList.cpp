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
Node* reverseLL(Node* &head)
{
    Node* prev = NULL;
    Node* curr = head;
    // current -> next = prev
    // move all 3 ptrs by one step ahead
    while(curr != NULL)
    {
        Node *next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    // when this loop ends, prevptr pointing to my last node which is new head
    Node* new_head = prev;
    return new_head;
}
Node* reverseLLRecursion(Node *head)
{
    if(head == NULL || head->next == NULL)
    {
        return head;
    }
    Node *new_head = reverseLLRecursion(head->next);
    head->next->next = head;
    head->next = NULL; // head is now pointing to last node in reversed ll
    return new_head;
}
int main()
{
    LinkedList ll;
    ll.insert(1);
    ll.insert(2);
    ll.insert(3);
    ll.insert(4);
    ll.insert(5);
    ll.display();
    ll.head = reverseLLRecursion(ll.head);
    cout << "Reversed Linked List: " << endl;
    ll.display();
    return 0;
}