#include<iostream>
using namespace std;
int main(){
    int arr[5][4]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
    int sum = 0;
     for(int i=0;i<5;i++){
        for(int j=0;j<4;j++){
            if((i==1||i==2||i==3||i==4)&&(j==1||j==2)) sum+=arr[i][j];
        }
    }
    cout<<"sum of element bw (1,1) and (4,2) in matrix: "<<sum;
}