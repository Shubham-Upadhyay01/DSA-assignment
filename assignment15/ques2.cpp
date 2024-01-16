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
    cout<<endl;
    //transposing the matrix
    for(int i=0;i<m;i++){
        for(int j=0;j<i;j++){
            swap(a[i][j],a[j][i]);
        }
    }
    //printing
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    //rotating anti clockwise
    //outer loop column
    for(int c=0;c<m;c++){
        //reverse the cth column
        int i=0;
        int j=m-1;
        while(i<j){
            swap(a[i][c],a[j][c]);
            i++;
            j--;
        }
    }
    cout<<endl;
    //printing
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }


}