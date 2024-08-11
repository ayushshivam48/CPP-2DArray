#include<iostream>
using namespace std;
int main(){
    int arr[4][2]={{01,98},{02,78},{03,99},{04,69}};
    int sum = 0;
     for(int i=0;i<4;i++){
        for(int j=0;j<2;j++){
             sum+=arr[i][j];
        }
    }
    cout<<"sum of element in matrix: "<<sum;
}