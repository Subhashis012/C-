#include<iostream>
using namespace std;
int main(){
    int score;
    cout<<"Enter Score: ";
    cin>>score;
    // score>80 , print Well Done
    // score= 50-80 , print Can Improve
    // score<50, print PoorPerformance
    if(score>80){
        cout<<"Well done!"<<endl;
    }
    else if(score>50){
        cout<<"Can Improve!"<<endl;
    }
    else{
        cout<<"Poor Performance!"<<endl;
    }
    return 0;
}