#include <iostream>
using namespace std;
void f(int *arr, int idx, int n)
{
    if (idx == n)
        return;
    // self work
    cout << arr[idx] << " ";
    // assume that work is done
    f(arr, idx + 1, n); // assume it works correctly -> it will print the whole array
}
int main()
{
    int n = 5;
    int arr[] = {6, 1, 9, 3, 4};
    f(arr, 0, n);
    return 0;
}