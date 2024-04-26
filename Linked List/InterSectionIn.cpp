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
int getLength(Node *head)
{
    Node *temp = head;
    int length = 0;
    while (temp != NULL)
    {
        length++;
        temp = temp->next;
    }
    return length;
}
Node *moveHeadByK(Node *head, int k)
{
    Node *ptr = head;
    while (k--)
    {
        ptr = ptr->next;
    }
    return ptr;
}
Node *getInterSection(Node *head1, Node *head2)
{
    // step 1: Calculate length of both linked list
    int l1 = getLength(head1);
    int l2 = getLength(head2);
    // step 2: find difference k between linked list and move longer linked List ptr by k steps
    Node *ptr1, *ptr2;
    if (l1 > l2) // LL1 is longer
    {
        int k = l1 - l2;
        ptr1 = moveHeadByK(head1, k);
        ptr2 = head2;
    }
    else
    { // LL2 is longer
        int k = l2 - l1;
        ptr1 = head1;
        ptr2 = moveHeadByK(head2, k);
    }
    // step 3: compare ptr1 and ptr2 nodes
    while (ptr1)
    {
        if (ptr1 == ptr2)
        {
            return ptr1;
        }
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
    }
    return NULL;
}
int main()
{
    LinkedList ll1;
    ll1.insert(1);
    ll1.insert(2);
    ll1.insert(3);
    ll1.insert(4);
    ll1.insert(5);
    // 1->2->3->4->5->NULL
    ll1.display();
    LinkedList ll2;
    ll2.insert(6);
    ll2.insert(7);
    ll2.head->next->next = ll1.head->next->next->next;
    // 6->7->4->5->NULL
    ll2.display();
    Node *intersection = getInterSection(ll1.head, ll2.head);
    if (intersection)
    {
        cout << "Intersection at: " << intersection->val << endl;
    }
    else
    {
        cout << "No intersection" << endl;
    }
    return 0;
}