#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> prime;
    prime.push_back(2);
    prime.push_back(3);
    for(int i=4;i<10000;i++){
        int check=0;
        for(int x=0;x<prime.size();x++){
            if(i%prime[x]==0){
                check=1;
                break;
            }
        }
        if(check==0){
            prime.push_back(i);
        }
    }
    int ipt;
    cin>>ipt;
    while(ipt!=0){
        int cnt=0;
        int num=0;
        while(prime[num]<=ipt){
            int sum=prime[num];
            if(sum==ipt){
                cnt++;
            }else{
                for(int x=num+1;sum<=ipt;x++){
                    sum+=prime[x];
                    if(sum==ipt){
                        cnt++;
                        break;
                    }
                }
            } 
            num++;
        }
        cout<<cnt<<endl;
        cin>>ipt;
    }
    return 0;
}