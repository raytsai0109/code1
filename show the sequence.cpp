#include "bits/stdc++.h"
using namespace std;

void cplus(vector<int>&m,vector<int>&s,int mf,int a){
    m[0]=mf;
    for(int i=1;i<a;i++){
        m[i]=m[i-1]+s[i-1];
    }
}

void cmultiply(vector<int>&m,vector<int>&s,int mf,int a){
    m[0]=mf*s[0];
    for(int i=1;i<a;i++){
        m[i]=m[i-1]*s[i];
    }
}



int main(){
    int a;
    string si;
    while(cin>>si>>a){
        bool fc=0;
        vector<int>m(a);
        vector<int>s(a);
        stack<string>st;
        int mn=0;
        for(int i=0;i<si.size();i++){
            if(si[i]!=']'){
                if(si[i]=='+'||si[i]=='*'){
                    if(mn!=0){
                        st.push(to_string(mn));
                        mn=0;
                    }
                    st.push(string(1,si[i]));
                }else if(si[i]=='-'){
                    mn=((si[i+1]-'0')*-1);
                    i++;
                    if(i+1<si.size()&&!isdigit(si[i+1])){
                        st.push(to_string(mn));
                        mn=0;
                    }
                }else if(isdigit(si[i])){
                    mn*=10;
                    mn+=si[i]-'0';
                    if(i+1<si.size()&&!isdigit(si[i+1])){
                        st.push(to_string(mn));
                        mn=0;
                    }
                }
            }else{
                if(!st.empty()){
                    int xa,xb;
                    bool mth;
                    if(fc==0){
                        xb=stoi(st.top());
                        for(int i=0;i<a;i++){
                            s[i]=xb;
                        }
                        fc=1;
                        st.pop();
                    }
                    if(st.top()=="+"){
                        mth=0;
                    }else{
                        mth=1;
                    }
                    st.pop();
                    xa=stoi(st.top());
                    st.pop();
                    if(mth==0){
                        cplus(m,s,xa,a);
                    }else{
                        cmultiply(m,s,xa,a);
                    }
                    s=m;
                }
            }
        }
        for(int i=0;i<a-1;i++){
            cout<<m[i]<<" ";
        }
        cout<<m[a-1]<<'\n';
    }
    return 0;
}