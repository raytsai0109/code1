#include "bits/stdc++.h"
using namespace std;

int main(){
    int a;
    cin>>a;
    for(int i=0;i<a;i++){
        int steps;
        cin>>steps;
        int nowp=0;
        vector<int>r;
        for(int x=0;x<steps;x++){
            string now;
            cin>>now;
            if(now=="LEFT"){
                nowp-=1;
                r.push_back(-1);
            }else if(now=="RIGHT"){
                nowp+=1;
                r.push_back(1);
            }else{
                string skip;
                int sa;
                cin>>skip>>sa;
                nowp+=r[sa-1];
                r.push_back(r[sa-1]);
            }
        }
        cout<<nowp<<endl;

    }

    return 0;
}