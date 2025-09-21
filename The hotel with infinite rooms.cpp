#include "bits/stdc++.h"
using namespace std;

#define ll long long

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll s,d;
    while(cin>>s>>d){
        ll nowp=1,pls=s;
        while(nowp<=d){
            nowp+=pls;
            pls++;
        }
        cout<<pls-1<<'\n';
    }   

    return 0;
}