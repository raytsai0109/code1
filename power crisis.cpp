#include "bits/stdc++.h"
using namespace std;

int main(){
    int a;
    while(cin>>a){
        if(a==0){
            return 0;
        }else{
            if(a==13){
                cout<<1<<'\n';
            }else{
                for(int i=2;i<a-1;i++){
                    vector<int>mp(a);
                    for(int x=0;x<a;x++){
                        mp[x]=x+1;
                    }
                    int np=0;
                    auto fd=find(mp.begin(),mp.end(),mp[np]);
                    mp.erase(fd);
                    for(int y=0;y<a-2;y++){
                        np=(np+i-1)%mp.size();
                        auto fd=find(mp.begin(),mp.end(),mp[np]);
                        mp.erase(fd);
                    }
                    if(mp[0]==13){
                        cout<<i<<'\n';
                        break;
                    }
                }
            }
        }
    }

    return 0;
}