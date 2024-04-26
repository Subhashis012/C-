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
class LinkedList{
public:
    Node *head;
    LinkedList(){
        head = NULL;
    }
    void insert(int data){
        Node *new_node = new Node(data);
        if(head == NULL){ // Linked list is empty
            head = new_node;
            return;
        }
        Node *temp = head;
        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->next = new_node;
    }
    void display(){
        Node *temp = head;
        while(temp != NULL){
            cout<<temp->val<<" -> ";
            temp = temp->next;
        }
        cout<<"NULL"<<endl;
    }
};
void deleteAlternateNodes(Node *head)
{
    Node *curr_node = head;
    while(curr_node != NULL && curr_node->next != NULL)
    {
        Node *temp = curr_node->next; // this is the node to be deleted
        curr_node->next = temp->next;
        free(temp);
        curr_node = curr_node->next;
    }
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
    deleteAlternateNodes(ll.head);
    ll.display();
    return 0;
}