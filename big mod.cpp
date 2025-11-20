#include "bits/stdc++.h"
using namespace std;

int fp(int a,int b,int m){
    int md=1;
    a%=m;
    while(b>0){
        if(b&1){
            md=(md*a)%m;
        }
        a=(a*a)%m;
        b>>=1;
    }
    return md;
}

int main(){
    int a,b,m;
    string blk;
    while(cin>>a>>b>>m){
        getline(cin,blk);
        int ans=fp(a,b,m);
        cout<<ans<<endl;
    }
}