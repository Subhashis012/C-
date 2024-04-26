#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n = 5;
    for (int i = 0; i < n; i++)
    { 
        for (int j = 0; j < sqrt(n); j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
/*
i= 0, j = sqrt(n) instruction
i= 1, j = sqrt(n) instruction
i = 2, j = sqrt(n) instruction
i = 3, j = sqrt(n) instruction
i = 4, j = sqrt(n) instruction
.
.
.
.
.
i = n-1, j = sqrt(n) instruction
Total -> n * sqrt(n) 
Worst -> O(nsqrt(n))
*/