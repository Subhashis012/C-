#include <iostream>
using namespace std;
int sqrt(int x)
{
    /**
     * Time Complexity: O(log n)
     * Space Complexity: O(1)
     */
    int lo = 1, hi = x;
    int ans = -1;
    while(lo <= hi){
        int mid = lo + (hi - lo) / 2;
        if(mid * mid <= x){
            ans = mid;
            lo = mid + 1;
        }
        else{
            hi = mid - 1;
        }
    }
    return ans;
}
int main()
{
    cout<<"The Sqrt is :  "<<sqrt(40);
    return 0;
}