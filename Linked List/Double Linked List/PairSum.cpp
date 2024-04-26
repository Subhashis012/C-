#include <iostream>
#include <vector>
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
vector<int> pairSumDLL(Node *head, Node *tail, int x)
{
    vector<int> ans(2, -1);
    while (head != tail)
    {

        int sum = head->val + tail->val;
        if (sum == x)
        {
            ans[0] = head->val;
            ans[1] = tail->val;
            return ans;
        }
        if (sum > x) // i need smaller values, i will move my tail back
        {
            tail = tail->prev;
        }
        else // i need greater values, i will move my head forward
        {
            head = head->next;
        }
    }
    return ans;
}
int main()
{

    DoublyLL dll;
    dll.insertAtEnd(2);
    dll.insertAtEnd(5);
    dll.insertAtEnd(6);
    dll.insertAtEnd(8);
    dll.insertAtEnd(10);
    dll.display();
    vector<int> ans = pairSumDLL(dll.head, dll.tail, 11);
    cout << ans[0] << " " << ans[1] << endl;

    return 0;
}