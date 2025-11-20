#include "bits/stdc++.h"
using namespace std;

int dag(vector<vector<int>>&pth,vector<int>&dp,vector<int>&lstnum,int to){
    if(dp[to]!=-1)return dp[to];
    lstnum[to]=to;
    dp[to]=0;
    for(int i:pth[to]){
        int len=dag(pth,dp,lstnum,i)+1;
        if(len>dp[to]){
            dp[to]=len;
            lstnum[to]=lstnum[i];
        }else if(len==dp[to]){
            if(lstnum[i]<lstnum[to]){
                lstnum[to]=lstnum[i];
            }
        }
    }
    return dp[to];
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int ln,csn=1;
    while(cin>>ln){
        if(ln==0){
            return 0;
        }
        int start;
        cin>>start;
        vector<vector<int>>pth(ln+1);
        vector<int>dp(ln+1,-1);
        vector<int>lstnum(ln+1,0);
        int fa,tb;
        while(cin>>fa>>tb){
            if(fa==0&&tb==0){
                break;
            }else{
                pth[fa].push_back(tb);
            }
        }
        int ans=dag(pth,dp,lstnum,start);
        cout<<"Case "<<csn<<": The longest path from "<<start<<" has length "<<ans<<", finishing at "<<lstnum[start]<<"."<<endl;
        cout<<endl;
        csn++;
    }

    return 0;
}