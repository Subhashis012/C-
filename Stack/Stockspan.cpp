#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> pge(vector<int> &arr)
{
    int n = arr.size();
    reverse(arr.begin(), arr.end());
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    vector<int> output(n, -1);
    stack<int> st; // indexes
    st.push(0);
    for (int i = 0; i < n; i++)
    {
        while (!st.empty() && arr[i] > arr[st.top()])
        {
            output[st.top()] = n - i - 1;
            st.pop();
        }
        st.push(i);
    }
    while (!st.empty())
    {
        output[st.top()] = -1;
        st.pop();
    }
    reverse(output.begin(), output.end());
    reverse(arr.begin(), arr.end());
    return output;
}

int main()
{
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    vector<int> v;
    while (n--)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    vector<int> ans = pge(v);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << (i-ans[i]) << " ";
    }
    return 0;
}