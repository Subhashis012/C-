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
bool isPalindrome(Node *head)
{
    // 1. find middle element
    Node *slow = head;
    Node *fast = head;
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    // now slow is pointing to middle element
    // 2. break the ll list in the middle
    Node *curr = slow->next;
    Node *prev = slow;
    slow->next = NULL;
    // 3. reverse the second half of ll list
    while (curr)
    {
        Node *nextNode = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nextNode;
    }
    // 4. check if the two ll lists are equal
    Node *head1 = head;
    Node *head2 = prev;
    while (head2)
    {
        if (head1->val != head2->val)
        {
            return false;
        }
        head1 = head1->next;
        head2 = head2->next;
    }
    return true;
}
int main()
{
    LinkedList ll;
    ll.insert(1);
    ll.insert(2);
    ll.insert(3);
    //ll.insert(3);
    ll.insert(2);
    ll.insert(1);
    ll.display();
    cout<<isPalindrome(ll.head)<<endl;
    return 0;
}