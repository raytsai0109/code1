#include "bits/stdc++.h"
using namespace std;

vector<pair<int,int>>v[10001];
int ans,ansn;

void dfs(int to,int from,int cnt){
    if(ans<cnt){
        ans=cnt;
        ansn=to;
    }
    for(int i=0;i<v[to].size();i++){
        int go=v[to][i].first;
        int nm=v[to][i].second;
        if(go!=from){
            dfs(go,to,cnt+nm);
        }
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string s;
    int fn;
    bool hasdata=0;
    while(getline(cin,s)){
        if(s.size()==0){
            ans=0;
            dfs(fn,0,0);
            ans=0;
            dfs(ansn,0,0);
            cout<<ans<<endl;
            for(int i=0;i<10001;i++){
                v[i].clear();
            }
            hasdata=0;
        }else{
            hasdata=1;
            int a,b,c;
            stringstream ss(s);
            ss>>a>>b>>c;
            fn=a;
            v[a].push_back({b,c});
            v[b].push_back({a,c});
        }
    }
    if(hasdata){
        ans=0;
        dfs(fn,0,0);
        ans=0;
        dfs(ansn,0,0);
        cout<<ans<<endl;
    }
}