#include <bits/stdc++.h>
using namespace std;


int bs(vector<int> &ppl,int idx){
    int left=0,right=ppl.size()-1;
    while(left<=right){
        int mid=left+(right-left)/2;
        if(ppl[mid]==idx){
            return mid;
        }else if(ppl[mid]>idx){
            right=mid-1;
        }else{
            left=mid+1;
        }
    }
    return -1;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    vector<int>ppl;
    int a,b;
    cin>>a>>b;
    for(int i=0;i<a;i++){
        int p;
        cin>>p;
        ppl.push_back(p);
    }
    for(int i=0;i<b;i++){
        int idx;
        cin>>idx;
        int asw=bs(ppl,idx);
        if(asw==-1){
            cout<<"No"<<'\n';
        }else{
            cout<<"Yes"<<'\n';
        }
    }
    return 0;
}