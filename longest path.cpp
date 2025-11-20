#include "bits/stdc++.h"
using namespace std;

pair<int,int>dag(vector<vector<int>>&pth){

}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int ln,csn=1;;
    while(cin>>ln){
        if(ln==0){
            return 0;
        }
        int start;
        cin>>start;
        vector<vector<int>>pth(ln+1);
        int fa,tb;
        while(cin>>fa>>tb){
            if(fa==0&&tb==0){
                break;
            }else{
                pth[fa].push_back(tb);
            }
        }
        
        //cout<<"Case "<<csn<<": The longest path from "<<start<<" has length "<<ans.first<<", finishing at "<<ans.second<<"."<<endl;
        csn++;
    }

    return 0;
}