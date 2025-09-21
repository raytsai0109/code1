#include "bits/stdc++.h"
using namespace std;

#define ll long long

int gcd(int a,int b){
    while(b!=0){
        int t=b;
        b=a%b;
        a=t;
    }
    return a;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int inp;
    cin>>inp;
    for(int i=1;i<=inp;i++){
        string a,b;
        int ta,tb;
        cin>>a>>b;
        ta=stoi(a,nullptr,2);
        tb=stoi(b,nullptr,2);
        if(gcd(ta,tb)!=1){
            cout<<"Pair #"<<i<<": All you need is love!"<<"\n";
        }else{
            cout<<"Pair #"<<i<<": Love is not all you need!"<<"\n";
        }
    }

    return 0;
}