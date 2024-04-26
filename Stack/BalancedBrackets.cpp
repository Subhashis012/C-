#include <iostream>
#include <stack>
using namespace std;
bool isValid(string str)
{
    stack<char> st;
    for (int i = 0; i < str.size(); i++)
    {
        char ch = str[i]; // current char
        if (ch == '[' or ch == '{' || ch == '(')
        {
            st.push(ch);
        }
        else
        {
            // closing bracket
            if (ch == ')' and !st.empty() && st.top() == '(')
            {
                st.pop();
            }
            else if (ch == ']' and !st.empty() && st.top() == '[')
            {
                st.pop();
            }
            else if (ch == '}' and !st.empty() && st.top() == '{')
            {
                st.pop();
            }
            else
            {
                return false;
            }
        }
    }
    return st.empty();
}
int main()
{
    string str = "[[{(()()[])}]]";
    cout << isValid(str) << endl;
    return 0;
}