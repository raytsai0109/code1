#include "bits/stdc++.h"
using namespace std;

int glot=1;

void printBanner(){
    cout<<"=== CINEMA TICKET ==="<<endl;
}

int square(int x){
    return x*x;
}

int randomBonus(){
    srand(time(0));
    int x=(rand()%3)*10;
    return x;
}

int maximum(int a,int b){
    return max(a,b);
}

double maximumd(double x,double y,double z){
    return max({x,y,z});
}

int main(){
    int localt=1;
    int  hour,base,surcharge,bonus,total,cash,change;
    string type,acnumber;
    char ctype;
    while(true){
        bool check=0;
        printBanner();
        cout<<"enter accont:";
        cin>>acnumber;
        cout<<"enter type:";
        cin>>ctype;
        cout<<"enter show hour:";
        cin>>hour;
        cout<<"enter cash:";
        cin>>cash;
        cout<<endl;
        if(ctype!='A'&&ctype!='S'){
            check=1;
        }else if(hour>23||hour<0){
            check=1;
        }else if(cash<0){
            check=1;
        }
        if(check==1){
            cout<<"INVALID INPUT"<<endl;
            return 0;
        }else{
            cout<<"account: "<<acnumber<<endl;
            if(ctype=='A'){
                base=300;
                type="adult";
            }else{
                base=220;
                type="student";
            }
            cout<<"type: "<<type<<endl;
            cout<<"hour: "<<hour<<endl;

            cout<<"base: NTD "<<base<<endl;
            if(hour>=18&&hour<=22){
                surcharge=50;
            }else if(hour>=0&&hour<=11){
                surcharge=-20;
            }
            cout<<"ADJ: NTD "<<surcharge<<endl;
            cout<<"FEE: NTD 10"<<endl;
            int x,y,z;
            x=randomBonus();
            y=randomBonus();
            z=randomBonus();
            bonus=maximumd(x,y,z);
            cout<<"bonus: NTD "<<bonus<<endl;
            total=base+surcharge+10-bonus;
            cout<<"total: NTD "<<total<<endl;
            change=cash-total;
            if(change<0){
                cout<<"DUE: NTD X";
                return 0;
            }else{
                cout<<"change: NTD "<<change<<endl;
                int b1,b2,b3,b4,b5,b6,b7;
                b1=change/1000;
                change%=1000;
                b2=change/500;
                change%=500;
                b3=change/100;
                change%=100;
                b4=change/50;
                change%=50;
                b5=change/10;
                change%=10;
                b6=change/5;
                change%=5;
                b7=change;
                cout<<"bills: 1000x"<<b1<<" 500x"<<b2<<" 100x"<<b3<<" 50x"<<b4<<" 10x"<<b5<<" 5x"<<b6<<" 1x"<<b7<<endl;
                cout<<"order#: "<<localt<<"/"<<glot<<endl;
                int sqn=acnumber[acnumber.size()-1]-'0';
                cout<<"luck: "<<square(sqn)<<endl;
            }
        }
        glot++,localt++;
    }
}