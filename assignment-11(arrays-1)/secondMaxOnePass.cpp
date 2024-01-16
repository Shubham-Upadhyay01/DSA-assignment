#include<iostream>
using namespace std;
int main(){
    int arr[]= {1,-3,2,5,-2,6,3};
    int n= sizeof(arr)/4;
    int mx = INT16_MIN;
    int smx = INT16_MIN;

    for(int i=0;i<=n-1;i++){
        if(arr[i]>mx) 
            smx = mx;
            mx = arr[i];
    }
    cout<<mx<<endl;
    if(smx==INT16_MIN) cout<<"no second largest exists";
    cout<<smx<<endl;

}