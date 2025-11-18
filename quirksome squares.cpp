#include "bits/stdc++.h"
using namespace std;

int main(){
    int x;
    while(cin>>x){
        if(x==2){
            for(int i=0;i<=9;i++){
                int ans=i*i;
                int a,b;
                a=ans/10;
                b=ans%10;
                if((a+b)*(a+b)==ans){
                    cout<<a<<b<<endl;
                }
            }
        }else if(x==4){
            for(int i=0;i<=99;i++){
                int ans=i*i;
                int a,b;
                a=ans/100;
                b=ans%100;
                if((a+b)*(a+b)==ans){
                    string s=to_string(a);
                    if(s.size()==1){
                        string sa=s;
                        s="0";
                        s+=sa;
                    }
                    string sb=to_string(b);
                    if(sb.size()==1){
                        string sa=sb;
                        sb="0";
                        sb+=sa;
                    }
                    cout<<s<<sb<<endl;

                }
            }
        }else if(x==6){
            for(int i=0;i<=999;i++){
                int ans=i*i;
                int a,b;
                a=ans/1000;
                b=ans%1000;
                if((a+b)*(a+b)==ans){
                    string asa="",asb="";
                    string s=to_string(a);
                    if(s.size()<3){
                        for(int z=0;z<(3-s.size());z++){
                            asa+="0";
                        }
                    }
                    asa+=s;
                    string sb=to_string(b);
                    if(sb.size()<3){
                        for(int z=0;z<(3-sb.size());z++){
                            asb+="0";
                        }
                    }
                    asb+=sb;
                    cout<<asa<<asb<<endl;
                }
            }
        }else{
            for(int i=0;i<=9999;i++){
                int ans=i*i;
                int a,b;
                a=ans/10000;
                b=ans%10000;
                if((a+b)*(a+b)==ans){
                    string asa="",asb="";
                    string s=to_string(a);
                    if(s.size()<4){
                        for(int z=0;z<(4-s.size());z++){
                            asa+="0";
                        }
                    }
                    asa+=s;
                    string sb=to_string(b);
                    if(sb.size()<4){
                        for(int z=0;z<(4-sb.size());z++){
                            asb+="0";
                        }
                    }
                    asb+=sb;
                    cout<<asa<<asb<<endl;
                }
            }
        }
    }
    return 0;
}