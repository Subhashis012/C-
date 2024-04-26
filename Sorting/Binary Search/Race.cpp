#include <iostream>
#include <vector>
using namespace std;
bool canPlaceStudents(vector<int> &pos, int s, int mid)
{
    int studentsReqd = 1;
    int lastPlaced = pos[0];
    for (int i = 1; i < pos.size(); i++)
    {
        if (pos[i] - lastPlaced >= mid)
        {
            studentsReqd++;
            lastPlaced = pos[i];
            if (studentsReqd == s)
            {
                return true;
            }
        }
    }
    return false;
}
int race(vector<int> &pos, int s)
{
    /**
     * Time Complexity: O(n log n(xn-x1))
     * Space Complexity: O(1)
     */
    int n = pos.size();
    int lo = 1;
    int hi = pos[n - 1] - pos[0];
    int ans = -1;
    while (lo <= hi)
    {
        int mid = lo + (hi - lo) / 2;
        if (canPlaceStudents(pos, s, mid))
        {
            ans = mid;
            lo = mid + 1;
        }
        else
        {
            hi = mid - 1;
        }
    }
    return ans;
}
int main()
{
    int n;
    cout << "Enter the number of positions: ";
    cin >> n;
    vector<int> pos;
    cout << "Enter the positions: ";
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        pos.push_back(x);
    }
    int s;
    cout << "Enter the number of students: ";
    cin >> s;
    cout << race(pos, s);
    return 0;
}