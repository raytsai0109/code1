#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    while(cin>>n>>m){
        vector<int>k;
        vector<int>dp(n+1,0);
        dp[1]=1;
        for(int i=0;i<m;i++){
            int y;
            cin>>y;
            k.push_back(y);
            dp[y]=1;
        }
        sort(k.begin(), k.end(), greater<int>());
        for(int i=1;i<=n;i++){
            for(int x=0;x<m;x++){
                if(i+k[x]>n) continue;
                if(dp[i]==0){
                    dp[i+k[x]]=1;
                }
            }
        }
        if(dp[n]==1){
            cout<<"Stan wins"<<endl;
        } else {
            cout<<"Ollie wins"<<endl;
        }
    }
    return 0;
}