#include "bits/stdc++.h"
using namespace std;

int main(){
    int tn;
    cin>>tn;
    cin.ignore();
    string blk;
    getline(cin,blk);
    bool fck=0;
    for(int z=0;z<tn;z++){
        vector<int>totalstatus(101,-1);
        vector<vector<int>>ansstatus(101,vector<int>(10,-1));
        vector<vector<int>>penal(101,vector<int>(10,0));
        vector<int>ttlpenalty(101,0);
        string s;
        int maxac=0;
        while(getline(cin,s)&&!s.empty()){
                int contester,entq,calt=0;
                string stus;
                stringstream ss(s);
                ss>>contester>>entq>>calt>>stus;
                if(ansstatus[contester][entq]==1)continue;
                if(stus=="I"){
                    if(totalstatus[contester]==-1)totalstatus[contester]=0;
                    ansstatus[contester][entq]=0;
                    penal[contester][entq]+=20;
                }else if(stus=="C"){
                    if(totalstatus[contester]==-1)totalstatus[contester]=0;
                    totalstatus[contester]++;
                    penal[contester][entq]+=calt;
                    ttlpenalty[contester]+=penal[contester][entq];
                    ansstatus[contester][entq]=1;
                    maxac=max(maxac,totalstatus[contester]);
                }else{
                    if(totalstatus[contester]==-1)totalstatus[contester]=0;
                }
        }
        vector<int>prior;
        for(int i=maxac;i>=0;i--){
            vector<int>therollsv;
            bool ck=0;
            for(int x=1;x<=100;x++){
                if(totalstatus[x]==i){
                    therollsv.push_back(x);
                    ck=1;
                }
            }
            if(ck==1){
                if(therollsv.size()==1){
                    prior.push_back(therollsv[0]);
                }else{
                    for(int x=0;x<therollsv.size();x++){
                        for(int xa=x+1;xa<therollsv.size();xa++){
                            if(ttlpenalty[therollsv[xa]]<ttlpenalty[therollsv[x]]){
                                swap(therollsv[xa],therollsv[x]);
                            }
                        }
                    }
                    for(int x=0;x<therollsv.size();x++){
                        prior.push_back(therollsv[x]);
                    }
                }
            }
        }
        if(fck!=0){
            cout<<endl;
        }
        for(int i=0;i<prior.size();i++){
            cout<<prior[i]<<" "<<totalstatus[prior[i]]<<" "<<ttlpenalty[prior[i]]<<endl;
        }
        fck=1;
    }
    return 0;
}