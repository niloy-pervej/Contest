#include<bits/stdc++.h>
using namespace std;

int main(){
    int T,n,h;
    cin>>T;
    for(int i=0;i<T;i++){
        cin>>n>>h;
        int ans=(7-n)*24+(24-h);
        cout<<ans<<endl;
    }

    return 0;
}