#include<bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin>>T;
    for(int i=0;i<T;i++){
        long long int x;
        cin>>x;
        int n,sum=0;
        int count=0;
        while(sum>10){
            int n,sum=0;
            while(x!=0){
                n=x%10;
                x=x/10;
               sum=sum+n;
            }
            cout<<sum;
            count++;
        }
    }

    return 0;
}