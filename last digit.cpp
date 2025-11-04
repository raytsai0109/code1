#include "bits/stdc++.h"
using namespace std;

int main(){
    int dp[101];
    dp[1]=1;
    for(int i=2;i<=100;i++){
        int nm=1;
        for(int x=0;x<i;x++){
            nm*=i;
            nm%=10;
        }
        dp[i]=(dp[i-1]+nm)%10;
    }
    dp[0]=dp[100];
    string ipt;
    while(cin>>ipt){
        if(ipt=="0"){
            return 0;
        }
        int a,b,c;
        int sz=ipt.size();
        if(sz>=3){
            a=ipt[sz-3]-'0';
            b=ipt[sz-2]-'0';
            c=ipt[sz-1]-'0';
            int ans=a*100+b*10+c;
            ans%=100;
            cout<<dp[ans]<<'\n';
        }else{
            int ans=stoi(ipt);
            ans%=100;
            cout<<dp[ans]<<'\n';
        }
    }


}