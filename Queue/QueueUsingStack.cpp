#include<iostream>
#include<stack>
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
        this->st.push(x);
    }

    void pop()
    {
        if(this->st.empty()) return;
        stack<int> temp;
        while(not this->st.size()>1)
        {
            temp.push(st.top());
            st.pop();
        }
        this->st.pop();
        while(not temp.empty())
        {
            this->st.push(temp.top());
            temp.pop();
        }
    }

    bool empty()
    {
        return this->st.empty();
    }
    int front()
    {
        if(this->st.empty()) return -1;
        stack<int> temp;
        while(not this->st.size()>1)
        {
            temp.push(st.top());
            st.pop();
        }
        int result = this->st.top();
        while(not temp.empty())
        {
            this->st.push(temp.top());
            temp.pop();
        }
        return result;
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
    while(!qu.empty())
    {
        cout<<qu.front()<<endl;
        qu.pop();
    }
    return 0;
}