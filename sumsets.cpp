#include "bits/stdc++.h"
using namespace std;

#define ll long long


int cksum(vector<ll>num,ll target){
    auto fd=find(num.begin(),num.end(),target);
    num.erase(fd);
    for(ll i=0;i<num.size()-2;i++){
        for(ll x=i+1;x<num.size()-1;x++){
            for(ll y=x+1;y<num.size();y++){
                if(target==(num[i]+num[x]+num[y])){
                    return 1;
                }
            }
        }
    }
    return -1;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll a;
    while(cin>>a){
        if(a==0){
            return 0;
        }else{
            vector<ll>num;
            bool fon=0;
            for(ll i=0;i<a;i++){
                ll b;
                cin>>b;
                num.push_back(b);
            }
            sort(num.begin(),num.end(),greater<ll>());
            ll ansn=0;
            for(ll i=0;i<num.size();i++){
                ll ans=cksum(num,num[i]);
                if(ans==1){
                    fon=1;
                    ansn=num[i];
                    break;
                }
            }
            if(fon==1){
                cout<<ansn<<'\n';
            }else{
                cout<<"no solution"<<'\n';
            }
        }
    }
    return 0;
}