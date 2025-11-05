#include "bits/stdc++.h"
using namespace std;

int main(){
    int a;
    cin>>a;
    for(int x=0;x<a;x++){
        int nm;
        cin>>nm;
        vector<pair<double,double>>pl;
        for(int i=0;i<nm;i++){
            double xa,ya;
            cin>>xa>>ya;
            pl.push_back({xa,ya});
        }
        int ans=nm*(nm-1)/2;
        map<double,int>rp;
        for(int i=0;i<nm;i++){
            vector<double>ck;
            for(int y=i+1;y<nm;y++){
                double m=(pl[i].second-pl[y].second)/(pl[i].first-pl[y].first);
                if(pl[i].first-pl[y].first==0){
                    m=20000;
                }
                double t=pl[i].second-(m*pl[i].first);
                m=m*100+t;
                auto fd=rp.find(m);
                if(fd==rp.end()){
                    rp[m]=2;
                    ck.push_back(m);
                }else{
                    auto fd2=find(ck.begin(),ck.end(),m);
                    if(fd2==ck.end()){
                        rp[m]++;
                        ck.push_back(m);
                    }
                }
            }
        }
        for(auto i=rp.begin();i!=rp.end();++i){
            int ms=(i->second)*(i->second-1)/2-1;
            ans-=ms;
        }
        cout<<ans<<'\n';
    }
    return 0;
}