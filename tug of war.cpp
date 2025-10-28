#include "bits/stdc++.h"
using namespace std;

int main(){
    int a;
    cin>>a;
    cin.ignore();
    for(int h=0;h<a;h++){
        string blanks;
        getline(cin,blanks);
        int n,total=0;
        cin>>n;
        vector<int>wei(n);
        for(int i=0;i<n;i++){
            int nwei;
            cin>>nwei;
            total+=nwei;
            wei[i]=nwei;
        }
        vector<bool>bp(total/2+1,0);
        bp[0]=1;
        for(int i=0;i<n;i++){
            if(total/2>wei[i]){
                for(int x=total/2;x>=wei[i];x--){
                    if(bp[x-wei[i]]==1){
                        bp[x]=1;
                    }
                }
            }
        }
        int ans;
        for(int i=total/2;i>=0;i--){
            if(bp[i]==1){
                ans=i;
                break;
            }
        }
        cout<<ans<<" "<<total-ans<<'\n';
    }
}