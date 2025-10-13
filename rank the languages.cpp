#include "bits/stdc++.h"
using namespace std;

string bfs(vector<vector<string>>&m,vector<vector<bool>>&isvisited,int entx,int enty){
    int nxs=m.size();
    int nys=m[0].size();
    int dx[4]={1,-1,0,0};
    int dy[4]={0,0,1,-1};
    string target=m[entx][enty];
    queue<pair<int,int>>qe;
    qe.push({entx,enty});
    while(!qe.empty()){
        int fx=qe.front().first;
        int fy=qe.front().second;
        qe.pop();
        for(int i=0;i<4;i++){
            int x=fx+dx[i];
            int y=fy+dy[i];
            if(x>=0&&x<nxs&&y>=0&&y<nys){
                if(m[x][y]==target&&isvisited[x][y]==0){
                    qe.push({x,y});
                    isvisited[x][y]=1;
                }
            }
        }
    }
    return target;
}

int main(){
    int a;
    cin>>a;
    for(int z=0;z<a;z++){
        map<string,int>atype;
        int h,w;
        cin>>h>>w;
        vector<vector<string>>m({h,vector<string>(w)});
        vector<vector<bool>>isvisited(h,vector<bool>(w,0));
        for(int x=0;x<h;x++){
            string cinp;
            cin>>cinp;
            for(int y=0;y<w;y++){
                m[x][y]=cinp[y];
            }
        }
        for(int i=0;i<h;i++){
            for(int x=0;x<w;x++){
                if(isvisited[i][x]==0){
                    string tg=bfs(m,isvisited,i,x);
                    auto fd=atype.find(tg);
                    if(fd!=atype.end()){
                        atype[tg]++;
                    }else{
                        atype[tg]=1;
                    }
                }
            }
        }
        cout<<"World #"<<z+1<<'\n';
        vector<pair<string,int>>ans;
        for(auto it=atype.begin();it!=atype.end();++it){
            ans.push_back({it->first,it->second});
        }
        for(int i=0;i<ans.size();i++){
            for(int x=0;x<ans.size();x++){
                if(ans[i].second>ans[x].second||(ans[i].second==ans[x].second&&ans[i].first<ans[x].first)){
                    swap(ans[i],ans[x]);
                }
            }
        }
        for(int i=0;i<ans.size();i++){
            cout<<ans[i].first<<": "<<ans[i].second<<'\n';
        }
    }
    return 0;
}