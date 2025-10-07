#include "bits/stdc++.h"
using namespace std;


struct srt{
    int ox,oy,stps;
};

int bfs(vector<vector<int>> &maze){
    int n=maze.size();
    int m=maze[0].size();
    vector<vector<bool>>visited(n,vector<bool>(m,false));
    int dx[4]={1,-1,0,0};
    int dy[4]={0,0,1,-1};

    queue<srt>q;
    
}

int main(){
    int a;
    cin>>a;
    for(int i=0;i<a;i++){
        int b,c;
        cin>>b>>c;
        vector<vector<int>>maze(b,vector<int>(c));
        for(int x=0;x<b;x++){
            for(int y=0;y<c;y++){
                cin>>maze[x][y];
            }
        }
    }
    return 0;
}