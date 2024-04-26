#include <iostream>
#include <vector>
using namespace std;
// void sortZerosAndOne(vector<int> &v)
// {
//     int Zeros_Count =0;
//     //counting number of zeros
//     // for(int ele:v){
//     //     if(ele==0){
//     //         Zeros_Count++;
//     //     }
//     // }
//     int i=0;
//     while (i<v.size())
//     {
//         if(v[i++]==0){
//             Zeros_Count++;
//         }
//         //i++;
//     }

//     for(int i=0;i<v.size();i++){
//         if(i<Zeros_Count){
//             v[i]=0;
//         }else{    // i>=Zeros_Count
//             v[i]=1;
//         }
//     }
// }
// int main()
// {
//     int n;
//     cout<<"Enter the size of array: ";
//     cin>>n;
//     vector<int> v;
//     for(int i=0;i<n;i++)
//     {
//         int ele;
//         cin>>ele;
//         v.push_back(ele);
//     }
//     sortZerosAndOne(v);
//     for(int i=0;i<n;i++){
//         cout<<v[i]<<" ";
//     }
//     cout<<endl;
//     return 0;
// }
void sortZerosAndOne(vector<int> &v)
{
    int left_ptr = 0;
    int right_ptr = v.size() - 1;
    while (left_ptr < right_ptr)
    {
        if (v[left_ptr] == 1 && v[right_ptr] == 0)
        {
            v[left_ptr++] = 0;
            v[right_ptr--] = 1;
        }
        if (v[left_ptr] == 0)
        {
            left_ptr++;
        }
        if (v[right_ptr] == 1)
        {
            right_ptr--;
        }
    }
    return;
}
int main()
{
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int ele;
        cin >> ele;
        v.push_back(ele);
    }
    sortZerosAndOne(v);
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    return 0;
}