#include "bits/stdc++.h"
using namespace std;

int main(){
    int a;
    cin>>a;
    while(a!=0){
        int nowt=1,nowb=6,nowl=3,nowr=4,nowu=2,nowd=5;
        for(int i=0;i<a;i++){
            string step;
            cin>>step;
            if(step=="north"){
                int keep=nowt;
                nowt=nowd;
                nowd=nowb;
                nowb=nowu;
                nowu=keep;
            }else if(step=="east"){
                int keep=nowt;
                nowt=nowl;
                nowl=nowb;
                nowb=nowr;
                nowr=keep;
            }else if(step=="west"){
                int keep=nowt;
                nowt=nowr;
                nowr=nowb;
                nowb=nowl;
                nowl=keep;
            }else if(step=="south"){
                int keep=nowt;
                nowt=nowu;
                nowu=nowb;
                nowb=nowd;
                nowd=keep;
            }
        }
        cout<<nowt<<endl;
        cin>>a;
    }

    return 0;
}