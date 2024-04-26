#include <iostream>
using namespace std;
void f(int num, int k)
{
    if (k == 0)
        return;
    f(num, k - 1); // the function correctly prints the fist k-1 multiples
    cout << (num * k) << " ";
}
int main()
{
    f(2, 5);
    return 0;
}