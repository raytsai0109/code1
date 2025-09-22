#include "bits/stdc++.h"
using namespace std;

map <char,vector<pair<char,int>>>mp;
char start;

int dfs(char fts,int total){
    if(mp.count(fts)==0){
        return total;
    }
    int ma=0;
    for(auto &nxt:mp[fts]){
        ma=max(dfs(nxt.first,total+nxt.second),ma);
    }
    return ma;
}


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin>>start;
    int p;
    cin>>p;
    for(int i=0;i<p;i++){
        char ft,sc;
        int nm;
        cin>>ft>>sc>>nm;
        mp[ft].push_back({sc,nm});
    }
    int asw=dfs(start,0);
    cout<<asw<<'\n';

    return 0;
}