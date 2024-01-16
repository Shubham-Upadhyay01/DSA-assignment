#include<iostream>
#include<vector>
using namespace std;
int main(){
    int m;
    cout<<"enter rows and columns of matrix : ";
    cin>>m;
   
    int a[m][m];
    cout<<"enter the elements of the matrix:"<<endl;
    
    for(int i=0;i<m;i++){//squate matrix
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    // printing both the diagonal in a square matrix
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            if((i==j) || (i+j==m-1)){
                cout<<a[i][j]<<" ";
            }
            else
                cout<<" "<<" ";
        
        }
        cout<<endl;
    }
}