#include <iostream>
#include <stack>
#include <vector>
using namespace std;
vector<int> nge(vector<int> &arr)
{
    int n = arr.size();
    vector<int> output(n, -1);
    stack<int> st; // indexes
    st.push(0);
    for (int i = 0; i < n; i++)
    {
        while (!st.empty() && arr[i] > arr[st.top()])
        {
            output[st.top()] = arr[i];
            st.pop();
        }
        st.push(i);
    }
    while(!st.empty())
    {
        output[st.top()] = -1;
        st.pop();
    }
    return output;
}

vector<int> nse(vector<int> &arr)
{
    int n = arr.size();
    vector<int> output(n, -1);
    stack<int> st; // indexes
    st.push(0);
    for (int i = 0; i < n; i++)
    {
        while (!st.empty() && arr[i] < arr[st.top()])
        {
            output[st.top()] = arr[i];
            st.pop();
        }
        st.push(i);
    }
    while(!st.empty())
    {
        output[st.top()] = -1;
        st.pop();
    }
    return output;
}
int main()
{
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    vector<int> v;
    while(n--)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    vector<int> ans = nge(v);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }   
    return 0;
}