#include <iostream>
#include <vector>
using namespace std;
bool canDistributrChoco(vector<int> &arr, int mid, int s)
{
    int n = arr.size();
    int studentsReqd = 1;
    int currSum = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > mid)
        {
            return false;
        }
        if (currSum + arr[i] > mid)
        {
            studentsReqd++;
            currSum = arr[i];
            if (studentsReqd > s)
            {
                return false;
            }
            else
            {
                currSum += arr[i];
            }
        }
    }
    return true;
}
int distChoco(vector<int> &arr, int s)
{
    int n = arr.size();
    int lo = arr[0];
    int hi = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        hi += arr[i];
    }
    int ans = -1;
    while (lo <= hi)
    {
        int mid = lo + (hi - lo) / 2;
        if (canDistributrChoco(arr, mid, s))
        {
            ans = mid;
            hi = mid - 1;
        }
        else
        {
            lo = mid + 1;
        }
    }
    return ans;
}
int main()
{
    int n;
    cout << "Enter the number of elements : ";
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    int s;
    cout << "Enter the number of students : ";
    cin >> s;
    cout << distChoco(v, s); 
    return 0;
}