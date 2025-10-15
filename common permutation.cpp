#include "bits/stdc++.h"
using namespace std;

int main(){
    string a,b;
    while(getline(cin,a)&&getline(cin,b)){
        map<char,int>mp;
        for(int i=0;i<a.size();i++){
            auto fd=mp.find(a[i]);
            if(fd==mp.end()){
                mp[a[i]]=1;
            }else{
                mp[a[i]]++;
            }
        }
        vector<char>ans;
        for(int i=0;i<b.size();i++){
            auto fds=mp.find(b[i]);
            if(fds!=mp.end()){
                if(mp[b[i]]>=1){
                    ans.push_back(b[i]);
                    mp[b[i]]--;
                }
            }
        }
        sort(ans.begin(),ans.end());
        for(int i=0;i<ans.size();i++){
            cout<<ans[i];
        }
        cout<<'\n';
    }
}