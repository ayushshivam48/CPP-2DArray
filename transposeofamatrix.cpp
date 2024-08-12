#include<iostream>
using namespace std;
int main(){
    int arr[4][2];
    cout<<"enter the elements: ";
     for(int i=0;i<4;i++){
        for(int j=0;j<2;j++){
        cin>>arr[i][j];
        }
    }
    for(int i=0;i<4;i++){
        for(int j=0;j<2;j++){
        cout<<arr[i][j]<<" ";
        }
     cout<<endl;
    }
     cout<<endl;
     for(int j=0;j<2;j++){
        for(int i=0;i<4;i++){
        cout<<arr[i][j]<<" ";
        }
     cout<<endl;
    }
}