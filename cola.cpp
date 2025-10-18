#include "bits/stdc++.h"
using namespace std;


int main(){
    int a;
    while(cin>>a){
        int fans;
        for(int i=0;i<3;i++){
            int ans=a,nb=a+i;
            while(nb/3!=0){
                int thisg=nb/3;
                ans+=thisg;
                nb=(nb%3)+thisg;
            }
            if(i==0){
                fans=ans;
            }else{
                if(i==nb%3){
                    fans=ans;
                }
            }
        }
        cout<<fans<<'\n';
    }
    return 0;
}