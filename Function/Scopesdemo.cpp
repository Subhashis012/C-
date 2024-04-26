#include<iostreaM>
using namespace std;
string name = "Subhashis";


void fun(){
    int x=10;
    for(int y=0;y<=5;y++){
        x=x+y;
        int z=x*x; 
    }   
    cout<<name<<endl;
}
int main()
{
    cout<<name<<endl;
    name = "Ram";
    fun();
    return 0;
}