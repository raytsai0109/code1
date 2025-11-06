#include "bits/stdc++.h"
using namespace std;

int main(){
    string s;
    while(cin>>s){
        double a=stod(s);
        if(a==0.00){
            return 0;
        }
        long long nm[11]={2000,1000,400,200,100,40,20,10,4,2,1};
        long long b=(long long)round(a*20);
        vector<long long>dp(b+1,0);
        dp[0]=1;
        for(long long i=0;i<11;i++){
            for(long long x=1;x<=b;x++){
                if(x-nm[i]>=0){
                    dp[x]+=dp[x-nm[i]];
                }
            }
        }
        long long ans=dp[b];
        int ss=s.size();
        for(int i=0;i<6-ss;i++){
            cout<<" ";
        }
        cout<<s;
        int as=to_string(ans).length();
        for(int i=0;i<17-as;i++){
            cout<<" ";
        }
        cout<<ans<<'\n';

    }
    return 0;
}