#include "bits/stdc++.h"
using namespace std;


struct srt{
    int ox,oy,stps;
};

int bfs(vector<vector<int>> &maze,int px,int py,int desx,int desy){
    int n=maze.size();
    int m=maze[0].size();
    vector<vector<bool>>visited(n,vector<bool>(m,false));
    int dx[4]={1,-1,0,0};
    int dy[4]={0,0,1,-1};
    queue<srt>q;
    q.push({px,py,1});
    visited[px][py]=1;
    while(!q.empty()){
        srt nowp = q.front();
        q.pop();
        if(nowp.ox==desx&&nowp.oy==desy){
            return nowp.stps;
        }
        for(int i=0;i<4;i++){
            int ndx=nowp.ox+dx[i];
            int ndy=nowp.oy+dy[i];
            if(ndx>=0&&ndx<n&&ndy>=0&&ndy<m){
                if(maze[ndx][ndy]==0&&visited[ndx][ndy]==0){
                    visited[ndx][ndy]=true;
                    q.push({ndx,ndy,nowp.stps+1});
                }
            }
        }
    }
    return -1;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int a;
    cin>>a;
    for(int i=0;i<a;i++){
        int b,c;
        cin>>b>>c;
        int sx,sy,desx,desy;
        cin>>sx>>sy>>desx>>desy;
        vector<vector<int>>maze(b,vector<int>(c));
        for(int x=0;x<b;x++){
            string roll;
            cin>>roll;
            for(int y=0;y<c;y++){
                maze[x][y]=roll[y]-'0';
            }
        }
        int ans=bfs(maze,sx-1,sy-1,desx-1,desy-1);
        if(ans==-1){
            cout<<0<<'\n';
        }else{
            cout<<ans<<'\n';
        }
    }
    return 0;
}