#include<iostream>
#include<vector>
using namespace std;
int main(){
    int m;
    cout<<"enter rows and columns of matrix : ";
    cin>>m;
   
    int arr[m][m];
    cout<<"enter the elements of the matrix:"<<endl;
    
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
   
    cout<<endl;
    //wave print
    for(int j=0;j<m;j++){
        if(j%2==0){ //bottom to top
            for(int i=m-1;i>=0;i--){
              cout<<arr[i][j]<<" ";
         }
        }
        else{//top to bottom
            for(int i=0;i<m;i++){
              cout<<arr[i][j]<<" ";
         }

        }
    

        
    
    
}