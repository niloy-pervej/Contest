#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        long long int x1,y1,x2,y2,x3,y3,a,b;
        cin>>x1>>y1>>x2>>y2>>x3>>y3;
        a=(x1+x1)/2;
        b=(y1+y2)/2;
        if(a==x3&&b==y3)
        cout<<"TOUCH";
        else if(a<x3&&b>y3)
        cout<<"RIGHT";
        else
        cout<<"LEFT";
        cout<<endl;
        
    }
    return 0;
}