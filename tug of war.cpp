#include "bits/stdc++.h"
using namespace std;

int main(){
    int a;
    cin>>a;
    cin.ignore();
    string blk;
    getline(cin,blk);
    bool fst=0;
    for(int z=0;z<a;z++){
        int n,total=0;
        cin>>n;
        vector<int>num(n);
        for(int i=0;i<n;i++){
            int nm;
            cin>>nm;
            total+=nm;
            num[i]=nm;
        }
        bitset<45001>bp[53];
        bp[0][0]=1;
        for(int i=0;i<n;i++){
            for(int z=n/2+1;z>=1;z--){
                bp[z]|=(bp[z-1]<<num[i]);
            }
        }
        int bst=0;
        if(n%2==0){
            for(int i=total/2;i>=0;i--){
                if(bp[n/2][i]){
                    bst=i;
                    break;
                }
            }
        }else{
            for(int i=total/2;i>=0;i--){
                if(bp[n/2][i]||bp[n/2+1][i]){
                    bst=i;
                    break;
                }
            }
        }
        if(fst!=0){
            cout<<'\n';
        }
        fst=1;
        cout<<bst<<" "<<total-bst<<'\n';
    }
}