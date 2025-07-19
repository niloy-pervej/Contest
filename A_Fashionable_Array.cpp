#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        vector<int>ar(n);
        for(int j=0;j<n;j++){
            cin>>ar[j];
        }
        sort(ar.begin(),ar.end());
        int s=0,e=n-1,c=0,d=0;
        while((ar[s]+ar[e])%2!=0){
            s++;
            c++;
        }
        int s1=0,e2=n-1;
     while((ar[s1]+ar[e2])%2!=0){
            e2--;
            d++;
        }
        if(d>=c)
        cout<<c<<"\n";
        else 
        cout<<d<<"\n";
        
    }
}