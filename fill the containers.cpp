#include "bits/stdc++.h"
using namespace std;


bool cancut(vector<int>cv,int m,int target){
    vector<int>mc(m,0);
    int nc=0;
    for(int i=0;i<cv.size();i++){
        if(mc[nc]+cv[i]<=target){
            mc[nc]+=cv[i];
        }else{
            nc++;
            if(nc>=m){
                return 0;
            }else{
                if(mc[nc]+cv[i]<=target){
                    mc[nc]+=cv[i];
                }else{
                    return 0;
                }
            }
        }
    }
    return 1;
}

int main(){
    int n,m;
    while(cin>>n>>m){
        vector<int>cv(n);
        int nm=0,ttl=0;
        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            ttl+=a;
            cv[i]=a;
            nm=max(nm,a);
        }
        int l=nm,r=ttl;
        int mid=(l+r)/2,ans;
        while(l<=r){
            mid=(l+r)/2;
            bool result=cancut(cv,m,mid);
            if(result){
                ans=mid;
                r=mid-1;
            }else{
                l=mid+1;
            }
        }
        cout<<ans<<'\n';

    }

    return 0;
}