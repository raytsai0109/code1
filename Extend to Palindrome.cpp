#include "bits/stdc++.h"
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string a;
    while(cin>>a){
        string pt=a;
        reverse(pt.begin(),pt.end());
        int lg=a.length();
        vector<int>ptlps(lg+1);
        ptlps[0]=-1;
        int i=0,j=-1;
        while(i<lg){
            while(j!=-1&&pt[i]!=pt[j]){
                j=ptlps[j];
            }
            i++,j++;
            ptlps[i]=j;
        }
        i=0,j=0;
        while(i<lg){
            while(j!=-1&&a[i]!=pt[j]){
                j=ptlps[j];
            }
            i++,j++;
        }
        cout<<a;
        for(int st=j;st<lg;st++){
            cout<<pt[st];
        }
        cout<<'\n';
    }
    return 0;
}