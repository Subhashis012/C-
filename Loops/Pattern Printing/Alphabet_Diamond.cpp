#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter line no. ";
    cin >> n;
    // int nst=1;
    // int nsp=n-1;
    // int ml=(n/2+1);
    // for(int i=1;i<=n;i++)
    // {
    //     for(int k=1;k<=nsp;k++)
    //     {
    //         cout<<" ";
    //     }
    //     for(int j=1;j<=nst;j++)
    //     {
    //         char ch;
    //         ch=(char)j+64;
    //         cout<<ch;
    //     }
    //     if(i<ml)
    //     {
    //         nsp--;
    //         nst+=2;
    //     }
    //     else{
    //         nsp++;
    //         nst-=2;
    //     }
    //     cout<<endl;
    // }
    // loop to print upper triangle
    for (int line = 1; line <= n; line++)

    {
        int no_of_space=(n-line);
        for(int k=0;k<no_of_space;k++)
        {
            cout<<" ";
        }
        int no_of_chars = 2 * line - 1;
        for (int j = 0; j < no_of_chars; j++)
        {
            char ch = (char)('A' + j);
            cout << ch;
        }
        cout << endl;
    }
    // loop to print lower triangle
    for(int line =n+1;line<=2*n-1;line++)
    {
        int no_of_space=(line-n);
        for(int k=0;k<no_of_space;k++)
        {
            cout<<" ";
        }
        int no_of_chars=2*(2*n-line)-1;
        for(int j=0;j<no_of_chars;j++)
        {
            cout<<(char)('A'+j);
        }
        cout<<endl;
    }
    
    return 0;
}
