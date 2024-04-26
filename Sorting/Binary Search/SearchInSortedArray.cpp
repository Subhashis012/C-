#include<iostream>
#include<vector>
using namespace std;
int binarySearchSortedRotatedArray(vector<int> &input,int target){
    int lo = 0, hi = input.size() - 1;
    while (lo <= hi)
    {
        int mid = lo + (hi - lo) / 2;
        if(input[mid]==target) return mid;
        if(input[mid]>=input[lo]){
            if(target>=input[lo] && target<=input[mid]) hi = mid - 1;
            else lo = mid + 1;
        }
        else{
            if(target>=input[mid] && target<=input[hi]) lo = mid + 1;
            else hi = mid - 1;
        }
    }
    return -1;
}
int main()
{
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    vector<int> input;
    for (int i = 0; i < n; i++)
    {
        int ele;
        cin >> ele;
        input.push_back(ele);
    }
    int target;
    cout << "Enter the target: ";
    cin >> target;
    cout << binarySearchSortedRotatedArray(input, target);
    return 0;
}