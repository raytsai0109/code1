#include "bits/stdc++.h"
using namespace std;

int main(){
    int a;
    while(cin>>a){
        vector<int>lt(a);
        for(int i=0;i<a;i++){
            cin>>lt[i];
        }
        sort(lt.begin(),lt.end());
        if(a%2==0){
            int ans1=lt[a/2-1];
            int cnt=0;
            for(int i=0;i<a;i++){
                if(lt[i]==ans1||lt[i]==lt[a/2]){
                    cnt++;
                }
            }
            int ans2=lt[a/2]-lt[a/2-1]+1;
            cout<<ans1<<" "<<cnt<<" "<<ans2<<'\n';
        }else{
            int ans1=lt[(a+1)/2-1];
            int cnt=0;
            for(int i=0;i<a;i++){
                if(lt[i]==ans1){
                    cnt++;
                }
            }
            cout<<ans1<<" "<<cnt<<" "<<1<<'\n';
        }
    }

    return 0;
}