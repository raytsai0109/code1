#include <bits/stdc++.h>
using namespace std;

int main(){
    int a;
    while(cin>>a){
        vector<pair<int,int>>item;
        for(int i=0;i<a;i++){
            int m,v;
            cin>>m>>v;
            item.push_back(make_pair(m,v));
        }
        int dp[101]={0};
        for(int i=0;i<a;i++){
            for(int x=100;x>=item[i].first;x--){
                dp[x]=max(dp[x],dp[x-item[i].first]+item[i].second);
            }
        }
        cout<<dp[100]<<endl;
    }

    return 0;
}