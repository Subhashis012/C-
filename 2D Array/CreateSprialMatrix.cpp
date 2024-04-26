#include<iostream>
#include<vector>
using namespace std;
// 3
// { [1,2 ,3]
//   [8,9 ,4] 
//   [7, 6, 5]    }
// left = 0,1 , right = 2 ,1
// top = 0,1,2  , bottom = 2 ,1
// direction = 0, 1, 2, 3, (3+1)%4 =0
vector<vector<int>> createSprialMatrix(int n){
    vector<vector<int>> matrix(n,vector<int> (n));
    int left =0;
    int right = n-1;
    int top = 0;
    int bottom = n-1;
    int value = 1;
    int direction = 0;
    while(left<=right && top<=bottom){
        if(direction==0){
            for(int col=left;col<=right;col++){
                matrix[top][col]=value++;
            }
            top++;
        }
        else if(direction==1){
            for(int row=top;row<=bottom;row++){
                matrix[row][right]=value++;
            }
            right--;
        }
        else if(direction==2){
            for(int col=right;col>=left;col--){
                matrix[bottom][col]=value++;
            }
            bottom--;
        }
        else if(direction==3){
            for(int row=bottom;row>=top;row--){
                matrix[row][left]=value++;
            }
            left++;
        }
        direction = (direction+1)%4;
    }
    return matrix;
}
int main()
{
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    vector<vector<int>> matrix(n,vector<int> (n));
    matrix = createSprialMatrix(n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}