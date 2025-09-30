#include "bits/stdc++.h"
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int f;
    cin>>f;
    while(f!=0){
        map<string,int>lst;
        for(int i=0;i<f;i++){
            string clst="";
            set<int>nm;
            for(int x=0;x<5;x++){
                int npt;
                cin>>npt;
                nm.insert(npt);
            }
            for(int x:nm){
                clst+=to_string(x);
            }
            auto t=lst.find(clst);
            if(t!=lst.end()){
                lst[clst]++;
            }else{
                lst[clst]=1;
            }
        }
        int a=0,check=1;
        for(auto x=lst.begin();x!=lst.end();++x){
            if(x->second>a){
                check=1;
                a=x->second;
            }else if(x->second==a){
                check++;
            }
        }
        cout<<a*check<<'\n';
        cin>>f;
    }
    return 0;
}