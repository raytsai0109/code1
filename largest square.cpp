#include "bits/stdc++.h"
using namespace std;

int check(vector<vector<char>>&mp,int ans,int x,int y,char target){
    int rans=ans;
    int xs=mp.size();
    int ys=mp[0].size();
    if((x+ans)>=xs||(x-ans)<0||(y+ans)>=ys||(y-ans)<0){
        return rans;
    }
    int npx,npy;
    npx=x-ans;
    npy=y;
    for(int i=ans;i>=-ans;i--){
        if(mp[npx][npy+i]!=target)return ans;
    }
    npx=x+ans;
    for(int i=ans;i>=-ans;i--){
        if(mp[npx][npy+i]!=target)return ans;
    }
    npx=x;
    npy=y+ans;
    for(int i=ans;i>=-ans;i--){
        if(mp[npx+i][npy]!=target)return ans;
    }
    npy=y-ans;
    for(int i=ans;i>=-ans;i--){
        if(mp[npx+i][npy]!=target)return ans;
    }
     return check(mp,ans+1,x,y,target);
}

int main(){
    int ia;
    cin>>ia;
    for(int time=0;time<ia;time++){
        int n,m,q;
        cin>>n>>m>>q;
        vector<vector<char>>mp(n,vector<char>(m));
        for(int i=0;i<n;i++){
            string is;
            cin>>is;
            for(int x=0;x<m;x++){
                mp[i][x]=is[x];
            }
        }
        cout<<n<<" "<<m<<" "<<q<<'\n';
        for(int i=0;i<q;i++){
            int x,y;
            cin>>x>>y;
            char target=mp[x][y];
            int ans=check(mp,1,x,y,target);
            ans-=1;
            ans=ans*2+1;
            cout<<ans<<'\n';
        }
    }

    return 0;
}