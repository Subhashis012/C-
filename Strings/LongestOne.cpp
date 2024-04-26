#include <iostream>
using namespace std;
int longestOne(string str, int k)
{
    /**
     * Time Complexity: O(N) where N is the length of input string
     * Space Complexity: O(1)
    */
    int start = 0;
    int end = 0;
    int zero_count = 0;
    int max_length = 0;
    for (; end < str.length(); end++)
    {
        if (str[end] == '0')
        {
            zero_count++;
        }
        while (zero_count > k)
        {
            if (str[start] == '0')
            {
                zero_count--;
            }
            start++; // contracting our window
        }
        // zero_count <= k
        max_length = max(max_length, end - start + 1);
    }
    return max_length;
}
int main()
{
    string str;
    cout << "Enter a string: ";
    cin >> str;
    int k;
    cout << "Enter max flips: ";
    cin >> k;
    cout << longestOne(str, k) << endl;
    return 0;
}