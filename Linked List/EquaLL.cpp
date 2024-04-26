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
bool checkEquallLL(Node *head1, Node *head2)
{
    Node* ptr1 = head1;
    Node* ptr2 = head2;
    while(ptr1!=NULL && ptr2!=NULL)
    {
        if(ptr1->val != ptr2->val)
        {
            return false;
        }
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
    }
    // at this point either ptr1 is null, or ptr2 is null, or both are null
    return (ptr1==NULL && ptr2==NULL);
}
int main()
{
    LinkedList l1;
    l1.insert(1);
    l1.insert(2);
    l1.insert(4);
    l1.insert(3);
    LinkedList l2;
    l2.insert(1);
    l2.insert(2);
    l2.insert(3);
    l2.insert(4);
    l1.display();
    l2.display();
    cout << checkEquallLL(l1.head, l2.head) << endl;
    return 0;
}