#include "bits/stdc++.h"
using namespace std;

void bfs(vector<vector<int>>&mp,vector<vector<bool>>&isvisited,int fx,int fy){
    int n=mp.size();
    int m=mp[0].size();
    int dx[8]={1,-1,0,0,-1,1,-1,1};
    int dy[8]={0,0,1,-1,1,1,-1,-1};
    queue<pair<int,int>>stp;
    stp.push({fx,fy});
    isvisited[fx][fy]=1;
    while(!stp.empty()){
        pair<int,int>tfp;
        tfp=stp.front();
        stp.pop();
        for(int i=0;i<8;i++){
            int rx=tfp.first+dx[i];
            int ry=tfp.second+dy[i];
            if(rx>=0&&rx<n&&ry>=0&&ry<m){
                if(mp[rx][ry]==1&&isvisited[rx][ry]==0){
                    isvisited[rx][ry]=1;
                    stp.push({rx,ry});
                }
            }
        }
    }
    
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,m;
    while(cin>>n>>m){
        vector<vector<bool>>isvisited(n,vector<bool>(m,0));
        int ans=0;
        if(n==0&&m==0){
            return 0;
        }
        vector<vector<int>>mp(n,vector<int>(m));
        for(int i=0;i<n;i++){
            string s;
            cin>>s;
            for(int x=0;x<m;x++){
                if(s[x]=='*'){
                    mp[i][x]=0;
                }else{
                    mp[i][x]=1;
                }
            }
        }
        for(int i=0;i<n;i++){
            for(int x=0;x<m;x++){
                if(mp[i][x]==1&&isvisited[i][x]==0){
                    ans++;
                    bfs(mp,isvisited,i,x);
                }
            }
        }
        cout<<ans<<'\n';
    }
    
    return 0;
}