#include "bits/stdc++.h"
using namespace std;

int main(){
    int a;
    while(cin>>a){
        vector<int>num(1,1);
        int ps=0;
        for(int i=2;i<=a;i++){
            for(int x=0;x<num.size();x++){
                int tn=num[x]*i+ps;
                num[x]=tn%10;
                ps=tn/10;
            }
            while(ps>0){
                num.push_back(ps%10);
                ps/=10;
            }
        }  
        int ans=0;
        for(int i:num){
            ans+=i;
        }
        cout<<ans<<endl;
    }
}