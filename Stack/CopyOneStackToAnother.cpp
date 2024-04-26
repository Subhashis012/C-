#include<iostream>
#include<stack>
using namespace std;
stack<int> copyStack(stack<int> &input)
{
    stack<int> temp;
    while(not input.empty())
    { 
        // do the process till the time input stack doesn't become empty
        int curr = input.top(); // [1,2,3] -> [1,2] curr = 2 -> [1] curr = 2 -> [] curr = 1
        input.pop();
        temp.push(curr); // [3,2,1]
    }
    stack<int> result;
    while(not temp.empty())
    {
        int curr = temp.top();
        temp.pop();
        result.push(curr);
    }
    return result;
}

void f(stack<int> &st,stack<int> &result)
{
    if(st.empty()) return;
    int curr = st.top();
    st.pop();
    f(st,result);
    result.push(curr);
}
int main()
{
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    //stack<int> result = copyStack(st);
    stack<int> result;
    f(st,result);
    while(not result.empty())
    {
        int curr = result.top();
        result.pop();
        cout << curr << endl;
    }
    return 0;
}