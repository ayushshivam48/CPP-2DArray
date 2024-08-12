#include<bits/stdc++.h>
#include<vector>
using namespace std;
void rotateArray(vector<vector<int> >& vec){
    int n=vec.size();
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            swap(vec[i][j],vec[j][i]);
        }
    }
    for(int i=0;i<n;i++){
        reverse(vec[i].begin(),vec[i].end());
    }
    return;
}
int main(){
    int n;
    cin>>n;
    vector<vector<int> > vec(n,vector<int> (n));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>vec[i][j];
        }
    }
    rotateArray(vec);
     for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<vec[i][j]<<" ";
        }cout<<endl;
    }
}