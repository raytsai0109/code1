#include "bits/stdc++.h"
using namespace std;

int main(){
    int n;
    cin>>n;
    cin.ignore();
    for(int h=0;h<n;h++){
        string s;
        getline(cin,s);
        s+='\n';
        vector<int>num;
        int total=0,sz=0;
        int nnum=0;
        for(int i=0;i<s.size();i++){
            if(isdigit(s[i])){
                int tn=s[i]-'0';
                nnum*=10;
                nnum+=tn;
            }else{
                total+=nnum;
                sz++;
                num.push_back(nnum);
                nnum=0;
            }
        }
        if(total%2!=0){
            cout<<"NO"<<'\n';
        }else{
            int target=total/2;
            sort(num.begin(),num.end());
            vector<bool>ans(total+1,0);
            ans[0]=1;
            for(int i=0;i<sz;i++){
                for(int x=total/2;x>=num[i];x--){
                    if(ans[x-num[i]]==1){
                        ans[x]=1;
                    }
                }
            }
            if(ans[target]==1){
                cout<<"YES"<<'\n';
            }else{
                cout<<"NO"<<'\n';            
            }
        }

    }
    return 0;
}