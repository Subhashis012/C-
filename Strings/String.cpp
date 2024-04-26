#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;
int main()
{
    // string str = "Subhashis";
    // string str1("Dhara");
    // cout<<str<<" "<<str1;
    // string str;
    // cout<<"Enter a string:";
    //cin>>str;
    // getline(cin,str);
    // cout<<str<<endl;
    // char ch = 'a';
    // cout<<int(ch)<<endl;
    // string str = "Subhashis";
    // reverse(str.begin(),str.end());
    // cout<<str<<endl;
    // string str = "Subhashis";
    // cout<<str.substr(5,8)<<endl;
    // cout<<str.substr(1)<<endl;
    // string s1 = "Subhashis";
    // string s2 = "Dhara";
    // cout<<s1+s2<<endl;  // copy string created for s1 extra space for creating copy
    // s1+=s2; // s1 = s1+s2 // s2 is getting appended after s1
    // cout<<s1<<endl;
    // char s1[20] = "Subhashis";
    // char s2[20] = "Dhara";
    // strcat(s1,s2);
    // cout<<s1<<endl;
    // string s1 = "abcd";
    // char ch = 'e';
    // s1.push_back(ch);
    // cout<<s1<<endl;
    // string s1 = "Subhashis";
    // cout<<s1.size()<<endl;
    // cout<<s1.length()<<endl;
    // char ch [20] = "abcde";
    // cout<<strlen(ch)<<endl;
    int num = 432;
    string str = to_string(num);
    str += "1";
    cout<<str<<endl;
    cout<<str[1]<<endl;
    return 0;
}