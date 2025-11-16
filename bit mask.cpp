#include "bits/stdc++.h"
using namespace std;

int main(){
    unsigned int n,l,u;
    while(cin>>n>>l>>u){
        unsigned int m=0;
        for(int i=31;i>=0;i--){
            unsigned int bit=1u<<i;
            if((m|bit)>u)continue;
            if((n&bit)&&((m|bit)>l))continue;
            m|=bit;
        }
        cout<<m<<'\n';
    }
    return 0;
}