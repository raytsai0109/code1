#include "bits/stdc++.h"
using namespace std;


int ck(int i){
    int a=0;
    while(i>0){
        a+=i%10;
        i/=10;
    }
    return a;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int N=1000000;
    vector<bool>isPrime(N+1,true);
    isPrime[0]=isPrime[1]=false;
    for(int i=2;i*i<=N;i++) {
        if(isPrime[i]){
            for(int j=i*i;j<=N;j+=i) {
                isPrime[j] = false;
            }
        }
    }
    vector<int>cklist(N+1,0);
    for(int i=2;i<N;i++){
        cklist[i]=cklist[i-1];
        if(isPrime[i]&&isPrime[ck(i)]){
            cklist[i]+=1;
        }
    }
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int a,b;
        cin>>a>>b;
        cout<<cklist[b]-cklist[a-1]<<'\n';
    }
    return 0;
}