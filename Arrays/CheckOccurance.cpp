#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    const int N = 1e5 + 10;
    vector<int> freq(N,0);
    for(int i=0;i<n;i++)
    {
        freq[v[i]]++;
    }
    int q;
    cout<<"Enter queries: ";
    cin>>q;
    while(q--){ 
        int queryElement;
        cin>>queryElement;
        cout<<freq[queryElement]<<endl;
    }
    return 0;
}