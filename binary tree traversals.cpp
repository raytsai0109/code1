#include "bits/stdc++.h"
using namespace std;

void lr(string &pre,string &ino,string &ans){
    if(pre.empty())return;
    char root=pre[0];
    auto fd=ino.find(root);

    string prel=pre.substr(1,fd);
    string prer=pre.substr(fd+1);

    string inol=ino.substr(0,fd);
    string inor=ino.substr(fd+1);

    lr(prel,inol,ans);
    lr(prer,inor,ans);

    ans+=root;
    
}

int main(){
    int a;
    cin>>a;
    for(int z=0;z<a;z++){
        int b;
        cin>>b;
        string pre="",ino="";
        for(int i=0;i<b;i++){
            string s;
            cin>>s;
            pre+=s;
        }
        for(int i=0;i<b;i++){
            string s;
            cin>>s;
            ino+=s;
        }
        string ans="";
        lr(pre,ino,ans);
        for(int i=0;i<ans.size()-1;i++){
            cout<<ans[i]<<" ";
        }
        cout<<ans[ans.size()-1]<<'\n';
    }
}