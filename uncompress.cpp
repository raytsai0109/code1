#include "bits/stdc++.h"
using namespace std;

int main(){
    string s;
    vector<string>smap;
    while(getline(cin,s)){
        if(s=="0"){
            break;
        }
        s+='\n';
        int nnum=0;
        string nows="";
        for(int i=0;i<s.size();i++){
            if(isdigit(s[i])){
                nnum*=10;
                nnum+=s[i]-'0';
            }else if(isalpha(s[i])){
                nows+=s[i];
            }else{
                if(nnum!=0){
                    int ss=smap.size();
                    string tword=smap[ss-nnum];
                    cout<<tword;
                    auto finds=find(smap.begin(),smap.end(),tword);
                    smap.erase(finds);
                    smap.push_back(tword);
                    cout<<s[i];
                }else if(nows!=""){
                    cout<<nows;
                    auto finds=find(smap.begin(),smap.end(),nows);
                    if(finds==smap.end()){
                        smap.push_back(nows);
                    }else{
                        smap.erase(finds);
                        smap.push_back(nows);
                    }
                    cout<<s[i];
                }else{
                    cout<<s[i];
                }
                nnum=0;
                nows="";
            }
        }
    }
}