#include "bits/stdc++.h"
using namespace std;

struct sct{
    int rz,rx,ry;
    int stps;
};

int bfs(vector<vector<vector<int>>>&mp,sct start){
    int dx[6]={1,-1,0,0,0,0};
    int dy[6]={0,0,1,-1,0,0};
    int dz[6]={0,0,0,0,1,-1};
    int zs=mp.size();
    int xs=mp[0].size();
    int ys=mp[0][0].size();
    vector<vector<vector<int>>>isvisited(zs,vector<vector<int>>(xs,vector<int>(ys,0)));
    queue<sct>q;
    q.push(start);
    while(!q.empty()){
        sct nowp=q.front();
        int nstp=nowp.stps;
        for(int i=0;i<6;i++){
            int nx=nowp.rx+dx[i];
            int ny=nowp.ry+dy[i];
            int nz=nowp.rz+dz[i];
            if(nx>=0&&nx<xs&&ny>=0&&ny<ys&&nz>=0&&nz<zs&&isvisited[nz][nx][ny]==0){
                if(mp[nz][nx][ny]==0){
                    q.push({nz,nx,ny,nstp+1});
                    isvisited[nz][nx][ny]=1;
                }
                if(mp[nz][nx][ny]==3){
                    return nstp;
                }
            }
        }
        q.pop();
    }
    return -1;
}

int main(){
    int a,b,c;
    while(cin>>a>>b>>c){
        if(a==0&&b==0&c==0){
            return 0;
        }
        sct start;
        vector<vector<vector<int>>>mp(a,vector<vector<int>>(b,vector<int>(c)));
        for(int i=0;i<a;i++){
            for(int x=0;x<b;x++){
                string s;
                cin>>s;
                for(int y=0;y<c;y++){
                    if(s[y]=='S'){
                        mp[i][x][y]=2;
                        start={i,x,y,1};
                    }else if(s[y]=='E'){
                        mp[i][x][y]=3;
                    }else if(s[y]=='#'){
                        mp[i][x][y]=1;
                    }else{
                        mp[i][x][y]=0;
                    }
                }
            }
            string blk;
            getline(cin,blk);
        }
        int ans=bfs(mp,start);
        if(ans!=-1){
            cout<<"Escaped in "<<ans<<" minute(s)."<<'\n';
        }else{
            cout<<"Trapped!"<<'\n';
        }
    }
    return 0;
}