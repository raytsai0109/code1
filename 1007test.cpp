#include "bits/stdc++.h"
using namespace std;

int main(){
    int days,target;
    cout<<"How many days?";
    cin>>days;
    cout<<"Daily target (NTD)?";
    cin>>target;
    int cnt=1,total=0,min=0,max=0,hitd=0,hits=0,checkhs=0;
    int salesn[days+1];
    while(cnt<=days){
        int x;
        cout<<"Enter slaes for day #"<<cnt<<" ";
        cin>>x;
        if(x<0){
            cout<<"Invalid, enter again"<<'\n';
        }else{
            if(cnt==1){
                min=x;
            }
            salesn[cnt]=x;
            total+=x;
            if(x<min){
                min=x;
            }
            if(x>max){
                max=x;
            }
            if(x>=target){
                hitd++;
                hits++;
                if(hits>checkhs){
                    checkhs=hits;
                }
            }else{
                if(hits>checkhs){
                    checkhs=hits;
                }
                hits=0;
                
            }
            cnt++;
        }
    }
    float rate=float(hitd)/float(days)*100;
    float bc=total*0.02;
    float bns;
    float avg=total/days;
    if(total>=6000){
        bns=total*0.02;
    }else if(total>=3000){
        bns=total*0.01;
    }else{
        bns=0;
    }
    cout<<"COUNT: "<<days<<'\n';
    cout<<"TOTAL: "<<total<<'\n';
    cout<<"MIN/MAX: "<<min<<"/"<<max<<'\n';
    cout<<"AVERAGE: "<<fixed<<setprecision(2)<<avg<<'\n';
    cout<<"HIT DAYS (>= target)"<<hitd<<'\n';
    cout<<"HIT RATE: "<<fixed<<setprecision(2)<<rate<<"%"<<'\n';
    cout<<"LONGEST STREAK (>= target): "<<checkhs<<'\n';
    cout<<'\n';
    cout<<"BASE COMMISSION (2%): NTD"<<bc<<'\n';
    cout<<"BONUS: NTD"<<bns<<'\n';
    cout<<"FINAL REWARD: NTD "<<bc+bns<<'\n';
    if((total/days)>=target){
        cout<<"OVERALL: On Target"<<'\n';
    }else{
        cout<<"OVERALL: Below Target"<<'\n';
    }
    






    return 0;
}