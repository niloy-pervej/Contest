#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>array(n);
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    sort(array.begin(),array.end());
   
    // for(int i=0;i<n;i++){
    //     cout<<array[i]<<"\t";
    int count=1;
    for(int i=1;i<n;i++){
        if(array[i]!=array[i-1]){
            count++;
        }
    }
    cout<<count;
}