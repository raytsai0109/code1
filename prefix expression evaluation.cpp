#include "bits/stdc++.h"
using namespace std;

int main(){
    string s;
    while(getline(cin,s)){
        if(s=="."){
            return 0;
        }
        stack<int>a;
        int nnum=0,dj=1;
        bool ck=0;
        for(int i=s.size()-1;i>=0;i--){
            int n1,n2;
            if(isdigit(s[i])){
                nnum+=(s[i]-'0')*dj;
                dj*=10;
            }else if(s[i]=='+'){
                if(!a.empty()){
                    n1=a.top();
                    a.pop();
                }else{
                    ck=1;
                    cout<<"illegal"<<'\n';
                    break;
                }
                if(!a.empty()){
                    n2=a.top();
                    a.pop();
                }else{
                    ck=1;
                    cout<<"illegal"<<'\n';
                    break;
                }
                a.push(n1+n2);
            }else if(s[i]=='-'){
                if(!a.empty()){
                    n1=a.top();
                    a.pop();
                }else{
                    ck=1;
                    cout<<"illegal"<<'\n';
                    break;
                }
                if(!a.empty()){
                    n2=a.top();
                    a.pop();
                }else{
                    ck=1;
                    cout<<"illegal"<<'\n';
                    break;
                }
                a.push(n1-n2);
            }else if(s[i]=='*'){
                if(!a.empty()){
                    n1=a.top();
                    a.pop();
                }else{
                    ck=1;
                    cout<<"illegal"<<'\n';
                    break;
                }
                if(!a.empty()){
                    n2=a.top();
                    a.pop();
                }else{
                    ck=1;
                    cout<<"illegal"<<'\n';
                    break;
                }
                a.push(n1*n2);
            }else if(s[i]=='/'){
                if(!a.empty()){
                    n1=a.top();
                    a.pop();
                }else{
                    ck=1;
                    cout<<"illegal"<<'\n';
                    break;
                }
                if(!a.empty()){
                    n2=a.top();
                    a.pop();
                }else{
                    ck=1;
                    cout<<"illegal"<<'\n';
                    break;
                }
                a.push(n1/n2);
            }else if(s[i]=='%'){
                if(!a.empty()){
                    n1=a.top();
                    a.pop();
                }else{
                    ck=1;
                    cout<<"illegal"<<'\n';
                    break;
                }
                if(!a.empty()){
                    n2=a.top();
                    a.pop();
                }else{
                    ck=1;
                    cout<<"illegal"<<'\n';
                    break;
                }
                a.push(n1%n2);
            }else{
                if(nnum!=0){
                    a.push(nnum);
                    nnum=0;
                    dj=1;
                }
            }
        }
        if(ck!=1){
            cout<<a.top()<<'\n';
        }
    }
    return 0;
}