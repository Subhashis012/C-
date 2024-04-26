#include<iostream>
using namespace std;
int main(){
    int cp,sp; // cp= Cost Prize & sp= Selling Prize
    cout<<"Enter Cost Prize: ";
    cin>>cp;
    cout<<"Enter Selling Prize: ";
    cin>>sp;
    if(sp>cp){
        int profit = sp-cp;
        cout<<"Your profit is: "<<profit<<endl;
    }
    else if(cp>sp){
        int loss = cp-sp;
        cout<<"Your loss is: "<<loss<<endl;
    }
    else{
        cout<<"No Profit or Loss"<<endl;
    }
    return 0;
}