#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    map<string,int>m;
    for(int i=0;i<a;i++){
        string s;
        cin>>s>>m[s];
    }
    string word;
    for(int i=0;i<b;i++){
        int score=0;
        cin>>word;
        while(word!="."){
            auto iter = m.find(word);
            if(iter != m.end()){
                score+=m[word];
            }
            cin>>word;
        }
        cout<<score<<endl;
        
    }



    return 0;
}