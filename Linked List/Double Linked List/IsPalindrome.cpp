#include <iostream>
using namespace std;
class Node
{
public:
    int val;
    Node *prev;
    Node *next;
    Node(int data)
    {
        val = data;
        prev = NULL;
        next = NULL;
    }
};
class DoublyLL
{
public:
    Node *head;
    Node *tail;
    DoublyLL()
    {
        head = NULL;
        tail = NULL;
    }

    void display()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->val << "<->";
            temp = temp->next;
        }
        cout << endl;
    }
    void insertAtEnd(int val)
    {
        Node *new_node = new Node(val);
        if (tail == NULL)
        {
            head = new_node;
            tail = new_node;
            return;
        }
        tail->next = new_node;
        new_node->prev = tail;
        tail = new_node;
        return;
    }
};
bool isPalindrome(Node *head,Node *tail)
{
    while(head!=tail && tail!=head->prev)
    {
        if(head->val!=tail->val)
        {
            return false;
        }
        head=head->next;
        tail=tail->prev;
    }
    return true;
}
int main()
{

    DoublyLL dll;
    dll.insertAtEnd(1);
    dll.insertAtEnd(2);
    dll.insertAtEnd(3);    
    dll.insertAtEnd(3);    
    dll.insertAtEnd(2);    
    dll.insertAtEnd(1);    
    dll.display();
    cout<<isPalindrome(dll.head,dll.tail)<<endl;
    
    return 0;
}