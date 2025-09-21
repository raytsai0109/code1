#include<bits/stdc++.h>
using namespace std;

struct place{
    int x,y;
};

place mopo(place p){
    p.x-=1;
    p.y+=1;
    return p; 
}

place moo(place p){
    p.x-=1;
    return p; 
}

place omo(place p){
    p.y-=1;
    return p; 
}

place pomo(place p){
    p.x+=1;
    p.y-=1;
    return p; 
}

place poo(place p){
    p.x+=1;
    return p; 
}

place opo(place p){
    p.y+=1;
    return p; 
}


int main(){
    int a;
    while(cin>>a){
        int test,tr,ts;
        switch(a){
            case 1:
                cout<<"0 0"<<endl;
                break;
            case 2:
                cout<<"0 1"<<endl;
                break;
            case 3:
                cout<<"-1 1"<<endl;
                break;
            case 4:
                cout<<"-1 0"<<endl;
                break;
            case 5:
                cout<<"0 -1"<<endl;
                break;
            case 6:
                cout<<"1 -1"<<endl;
                break;
            case 7:
                cout<<"1 0"<<endl;
                break;
            default:
                int roll=(a-1)/6;
                if((a-1)%6!=0){
                    roll+=1;
                }
                test=1;
                tr=0,ts=0;
                while(ts<roll){
                    tr+=1;
                    ts+=test;
                    test++;
                }
                roll=0;
                for(int i=1;i<=tr-1;i++){
                    roll+=i;
                }
                int cp=roll*6+2;
                if(cp==a){
                    cout<<tr-1<<" 1"<<endl;
                }else{
                    place p={tr-1,1};
                    while(cp!=a){
                        for(int i=0;i<tr-1;i++){
                            p=mopo(p);
                            cp+=1;
                            if(cp==a){
                                break;
                            }
                        }
                        if(cp==a){
                            break;
                        }
                        for(int i=0;i<tr;i++){
                            p=moo(p);
                            cp+=1;
                            if(cp==a){
                                break;
                            }
                        }
                        if(cp==a){
                            break;
                        }
                        for(int i=0;i<tr;i++){
                            p=omo(p);
                            cp+=1;
                            if(cp==a){
                                break;
                            }
                        }
                        if(cp==a){
                            break;
                        }
                        for(int i=0;i<tr;i++){
                            p=pomo(p);
                            cp+=1;
                            if(cp==a){
                                break;
                            }
                        }
                        if(cp==a){
                            break;
                        }
                        for(int i=0;i<tr;i++){
                            p=poo(p);
                            cp+=1;
                            if(cp==a){
                                break;
                            }
                        }
                        if(cp==a){
                            break;
                        }
                        for(int i=0;i<tr;i++){
                            p=opo(p);
                            cp+=1;
                            if(cp==a){
                                break;
                            }
                        }
                        if(cp==a){
                            break;
                        }
                    }
                    cout<<p.x<<" "<<p.y<<endl;
                }

        }
    }
    return 0;
}