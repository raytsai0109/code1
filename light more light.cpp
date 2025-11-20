#include "bits/stdc++.h"
using namespace std;

int main(){
    long long int a;
    while(cin>>a){
        if(a==0){
            return 0;
        }else{
            long long b=round(sqrt(a));
            if(b*b==a){
                cout<<"yes"<<'\n';
            }else{
                cout<<"no"<<'\n';
            }
        }
    }
    return 0;
}