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
void deleteDuplicate(Node *&head)
{
    Node *curr_node = head;
    while (curr_node)
    {
        while (curr_node->next && curr_node->val == curr_node->next->val)
        { // delete curr -> next
            Node *temp = curr_node->next; // node to be deleted
            curr_node->next = curr_node->next->next;
            free(temp);
        }
        // this loop ends when current node and next node values are different or linked list ends
        curr_node = curr_node->next;
    }
}
int main()
{
    LinkedList ll;
    ll.insert(1);
    ll.insert(2);
    ll.insert(2);
    ll.insert(3);
    ll.insert(3);
    ll.insert(4);
    ll.display();
    deleteDuplicate(ll.head);
    ll.display();
    return 0;
}