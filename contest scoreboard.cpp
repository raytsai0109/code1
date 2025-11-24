#include "bits/stdc++.h"
using namespace std;

int main(){
    int tn;
    cin>>tn;
    cin.ignore();
    for(int z=0;z<tn;z++){
        vector<int>totalstatus(101,-1);
        vector<vector<int>>ansstatus(101,vector<int>(10,-1));
        vector<vector<int>>penal(101,vector<int>(10,-1));
        vector<int>ttlpenalty(101);
        string s;
        while(getline(cin,s)){
            if(!s.empty()){
                int contester,entq,calt;
                string stus;
                contester=s[0]-'0';
                entq=s[2]-'0';
                calt=s[4]-'0';
                stus=s[6]-'0';
                if(stus=="I"){
                    if(totalstatus[contester]==-1)totalstatus[contester]=0;
                }
            }
        }
    }

    return 0;
}