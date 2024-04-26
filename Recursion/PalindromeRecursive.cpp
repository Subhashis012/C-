#include <iostream>
using namespace std;
bool f(int num, int *temp)
{
    if (num >= 0 && num <= 9)
    {
        int lastDigitOfTemp = (*temp) % 10;
        (*temp) /=  10;
        return (num == lastDigitOfTemp);
    }
    bool result = (f(num / 10, temp) && num % 10 == ((*temp) % 10));
    (*temp) = (*temp) / 10;
    return result;
}
int main()
{
    int num = 12621;
    int anotherNum = num;
    int *temp = &anotherNum;
    cout << f(num, temp);
    return 0;
}