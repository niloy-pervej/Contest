#include<bits/stdc++.h>
using namespace std;

int main(){
    long int t;
    cin>>t;
    for(int i=0;i<t;i++){
        string s;
        cin>>s;
      long int len=s.length();
      int count=0;
      for(int j=0;j<len-1;j++){
        if(s[j]=='(')
        count++;
        else
        count--;
       }
       if(count==0)
       cout<<"YES"<<"\n";
       else
       cout<<"NO"<<"\n";
      }

}