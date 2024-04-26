#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
// string LongestCommonPrefix(vector<string> &str){
//     // sorting the array of strings
//     sort(str.begin(),str.end());
//     string s1 = str[0]; // first string
//     int i = 0;
//     string s2 = str[str.size()-1]; // last string
//     int j = 0;
//     string ans = "";
//     while(i<s1.size() && j<s2.size()){
//         if(s1[i]==s2[j]){
//             ans+=s1[i];
//             i++;
//             j++;
//         }
//         else{
//             break;
//         }
//     }
//     return ans;
// }
string LongestCommonPrefix(vector<string> &str)
{
    // keeping first string as const camparing it with all other strings
    string s1 = str[0];
    int ans_length = s1.size();
    for(int i=1;i<str.size();i++)
    {
        int j=0;
        while(j<s1.size() && j<str[i].size() && s1[j]==str[i][j])   // finding the common prefix string length
        {
            j++;
        }
        ans_length = min(ans_length,j); // updating the length of ans string
    }
    string ans = s1.substr(0,ans_length);
    return ans;
}
int main()
{
    int n;
    cout<<"Enter no of strings: ";
    cin>>n;
    cout<<"Enter a strings: ";
    vector<string> str(n);
    for(int i=0;i<n;i++)
    {
        cin>>str[i];
    }
    cout<<"Longest common prefix: "<<LongestCommonPrefix(str)<<endl;
    return 0;
}