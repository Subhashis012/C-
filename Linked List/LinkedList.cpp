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
void insertHead(Node *&head, int val)
{
    Node *new_node = new Node(val);
    new_node->next = head;
    head = new_node;
}
void insertTail(Node *&head, int val)
{
    Node *new_node = new Node(val);
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    // temp has reached last node
    temp->next = new_node;
}
void insertPosition(Node *&head, int val, int pos)
{
    if (pos == 0)
    {
        insertHead(head, val);
        return;
    }
    Node *new_node = new Node(val);
    Node *temp = head;
    int curr_pos = 0;
    while (curr_pos != pos - 1)
    {
        temp = temp->next;
        curr_pos++;
    }
    // temp is pointing to node at pos -1
    new_node->next = temp->next;
    temp->next = new_node;
}
void updatePositon(Node *&head, int k, int val)
{
    Node *temp = head;
    int curr_pos = 0;
    while (curr_pos != k)
    {
        temp = temp->next;
        curr_pos++;
    }
    temp->val = val;
}
void deleteHead(Node *&head)
{
    Node *temp = head; // node to be deleted
    head = head->next;
    free(temp);
}
void deleteTail(Node *&head)
{
    Node *second_last = head;
    while (second_last->next->next != NULL)
    {
        second_last = second_last->next;
    }
    // now second_last is pointing to second last node
    Node *temp = second_last->next; // node to be deleted
    second_last->next = NULL;
    free(temp);
}
void deletePositon(Node *&head, int pos)
{
    if (pos == 0)
    {
        deleteHead(head);
        return;
    }
    int curr_pos = 0;
    Node *prev = head;
    while (curr_pos != pos)
    {
        prev = prev->next;
        curr_pos++;
    }
    // prev is pointing to node at pos-1
    Node *temp = prev->next; // node to be deleted
    prev->next = prev->next->next;
    free(temp);
}
void display(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}
int main()
{
    // Node* n = new Node(1);
    // cout<<n->val<<" "<<n->next<<endl;
    Node *head = NULL;
    insertHead(head, 3);
    display(head);
    insertHead(head, 2);
    display(head);
    insertHead(head, 1);
    display(head);
    insertTail(head, 4);
    display(head);
    insertPosition(head, 5, 1);
    display(head);
    updatePositon(head, 2, 6);
    display(head);
    // deleteHead(head);
    // display(head);
    // deleteTail(head);
    // display(head);
    deletePositon(head, 1);
    display(head);
    return 0;
}