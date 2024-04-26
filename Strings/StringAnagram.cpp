#include<iostream>
#include<string>
#include<vector>
using namespace std;
bool isAnagram(string s1,string s2){
    // create freq array
    vector<int> freq(26,0);
    // if lengths are different for s1,s2 toh return false
    if(s1.length()!=s2.length()){
        return false;
    }
    // store frequency of characters in s1 and s2
    for(int i=0;i<s1.length();i++){
        freq[s1[i]-'a']++; // for s1,we are increasing freq of char
        freq[s2[i]-'a']--; // for s2,we are decreasing freq of char
    }
    // checking if freq of every character is 0
    for(int i=0;i<26;i++){
        if(freq[i]!=0){ //not anagram
            return false;
        }
    }
    return true;
}
int main()
{
    string s1,s2;
    cout<<"Enter first string: ";
    cin>>s1;
    cout<<"Enter second string: ";
    cin>>s2;
    if(isAnagram(s1,s2)){
        cout<<"Strings are anagrams."<<endl;
    }
    else{
        cout<<"Strings are not anagrams."<<endl;
    }
    return 0;
}