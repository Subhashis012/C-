#include <iostream>
#include <stack>
#include <climits>
using namespace std;

class Queue
{
    stack<int> st;

public:
    Queue()
    {
    }

    void push(int x)
    {
        stack<int> tmp;
        while (!this->st.empty())
        {
            tmp.push(this->st.top());
            this->st.pop();
        }
        this->st.push(x);
        while (!tmp.empty())
        {
            this->st.push(tmp.top());
            tmp.pop();
        }
    }

    void pop()
    {
        if (this->st.empty())
            return;
        this->st.pop();
    }

    bool empty()
    {
        return this->st.empty();
    }
    int front()
    {
        if (this->st.empty())
            return INT_MIN;
        return this->st.top();
    }
};
int main()
{
    Queue qu;
    qu.push(10);
    qu.push(20);
    qu.push(30);
    qu.push(40);
    qu.pop();
    while (!qu.empty())
    {
        cout << qu.front() << endl;
        qu.pop();
    }
    return 0;
}