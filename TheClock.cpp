#include<bits/stdc++.h>
#include<sstream>
using namespace std;
bool isPalindrom(string s){
    for(int i=0;i<(s.size()/2);++i){
        if(s[i]!=s[s.size()-1-i]){
            return false;
        }
    }
    return true;
}
string addition(string s , int n ){
    int v = stoi(s.substr(0,1));
    int w = stoi(s.substr(3,4));
    for(int i=0;i<n;++i){       
        if(w<59){
            w+=1;
        }else{
            w=00;
            if(v<23){
                v+=1;
            }else{
                v=00;                
            }
        }       
    }
    return to_string(v)+":"+to_string(w);
}
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;++i){
        string s;
        cin>>s;
        int n;
        cin >> n;
        int k=0;
        string c=s;
        do{
            if(isPalindrom(c)){
                k=k+1;
            }
            c=addition(c,n);  

        }while(c!=s);
        cout<<k;      

    }
}