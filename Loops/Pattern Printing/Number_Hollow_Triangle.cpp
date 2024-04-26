#include <iostream>
using namespace std;

int main()
{
    int rows;
    cout << "Enter the number of rows for the hollow triangle: ";
    cin >> rows;

    // Outer loop for the number of rows
    for (int i = 1; i <= rows; i++)
    {
        // Inner loop for printing spaces
        for (int j = i; j < rows; j++)
        {
            cout << " ";
        }

        // Inner loop for printing numbers
        for (int k = 1; k <= (2 * i - 1); k++)
        {
            if (k == 1 || k == (2 * i - 1) || i == rows)
            {
                cout << i; // Print number at the edges and bottom row
            }
            else
            {
                cout << " "; // Print space for hollow region
            }
        }
        cout << endl;
    }
    return 0;
}
