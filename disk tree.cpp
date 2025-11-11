#include "bits/stdc++.h"
using namespace std;

struct node{
    map<string,node*>mp;
};

void insert(node* root,vector<string>&path){
    node* curr=root;
    for(auto& dir:path){
        if(!curr->mp.count(dir)){
            curr->mp[dir]=new node();
        }
        curr=curr->mp[dir];
    }
}

void print(node* root,int dpth=0){
    for(auto it = root->mp.begin(); it != root->mp.end(); ++it){
        for(int i=0;i<dpth;i++){
            cout<<" ";
        }
        cout<<it->first<<'\n';
        print(it->second,dpth+1);
    }
}


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    bool ft=1;
    while(true){
        string ipti;
        if(!getline(cin,ipti))return 0;
        if(ipti.empty())continue;
        int a=stoi(ipti);
        node* root=new node();
        for(int z=0;z<a;z++){
            string s;
            cin>>s;
            stringstream ss(s);
            string item;
            vector<string>smap;
            while(getline(ss,item,'\\')){
                smap.push_back(item);
            }
            insert(root,smap);
        }
        print(root);
        cout<<'\n';
        ft=0;
    }
    return 0;
}