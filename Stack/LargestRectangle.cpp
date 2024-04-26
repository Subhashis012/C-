#include <iostream>
#include <stack>
#include <vector>
#include <climits>
using namespace std;

int histogram(vector<int> &arr)
{
    int n = arr.size();
    stack<int> st; // indexes
    int ans = INT_MIN;
    st.push(0);
    for (int i = 1; i < n; i++)
    {
        while (!st.empty() && arr[i] < arr[st.top()])
        {
            int ele = arr[st.top()]; // current bar to be removed and whose ans will be calc
            st.pop();
            int nsi = i;
            int psi = (st.empty()) ? (-1) : st.top();
            ans = max(ans, ele * (nsi - psi - 1));
        }
        st.push(i);
    }
    while (!st.empty())
    {
        int ele = arr[st.top()];
        st.pop();
        int nsi = n;
        int psi = (st.empty()) ? (-1) : st.top();
        ans = max(ans, ele * (nsi - psi - 1));
    }
    return ans;
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
    int ans = histogram(v);
    cout<<ans<<endl;
    return 0;
}