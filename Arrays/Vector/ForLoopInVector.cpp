#include<iostream>
#include<vector>
using namespace std;
int main() { 
      vector<int> v;
   // vector<int> v(5);
    //for loop
    for(int i=0;i<5;i++){
        int element;  // eita hobe jokhon size bole deyoa hobe na tokhon
        cin>>element;
        v.push_back(element);    
        //cin>>v[i]; // eita hobe jokhon size bole deyoa thakbe tokhon
    }
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

    v.insert(v.begin()+2,6);  // insert kora hoy first positon then element
    // for each loop
    for(int element:v){
        cout<<element<<" ";
    }
    cout<<endl;
    v.erase(v.end()-2);
    // while loop
    int idx=0;
    while(idx<v.size()){
        cout<<v[idx]<<" ";    
        idx++;
    }
    return  0;
}