#include "bits/stdc++.h"
using namespace std;

void dfs(vector<int>&lst,vector<vector<int>>&pth,vector<int>&ndfs,vector<vector<int>>ans,int target){
    ndfs.push_back(target);
    if(!pth[target].empty()){
        for(int i=0;i<pth[target].size();i++){
            dfs(lst,pth,ndfs,ans,pth[target][i]);
        }
    }else{
        vector<int>sp=ndfs;
        reverse(sp.begin(),sp.end());
        ans.push_back(sp);
    }
    ndfs.pop_back();
}

int main(){
    int a;
    cin>>a;
    for(int x=0;x<a;x++){
        int n;
        cin>>n;
        vector<int>lst(n);
        for(int i=0;i<n;i++){
            cin>>lst[i];
        }
        vector<int>dp(n,1);
        vector<vector<int>>pth(n);
        int maxlength=1;
        for(int i=1;i<n;i++){
            for(int y=0;y<i;y++){
                if(lst[i]>lst[y]){
                    if(dp[i]<=dp[y]){
                        dp[i]=dp[y]+1;
                        maxlength=max(maxlength,dp[i]);
                        pth[i].clear();
                        pth[i].push_back(y);
                    }else if(dp[i]==dp[y]+1){
                        pth[i].push_back(y);
                    }
                }
            }
        }
        vector<vector<int>>ans;
        vector<int>ndfs;
        for(int i=0;i<n;i++){
            if(dp[i]==maxlength){
                dfs(lst,pth,ndfs,ans,i);
            }
        }
    }
    int c;
    cout<<c<<'\n';
    for(int i=0;i<ans.size();i++){

    }
    return 0;
}