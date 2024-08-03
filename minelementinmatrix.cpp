#include<iostream>
using namespace std;
int main(){
    int arr[4][2]={{01,98},{02,78},{03,99},{04,69}};
    int mn = arr[0][0];
     for(int i=0;i<4;i++){
        for(int j=0;j<2;j++){
            if(arr[i][j]<mn) mn=arr[i][j];
        }
    }
    cout<<"min element in matrix: "<<mn;
}