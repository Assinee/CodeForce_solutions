#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for (int i=0;i<t;++i){
        vector<vector<char>> w;        
        for(int j=0;j<8;++j){
            vector<char> v;                       
            for(int k =0 ;k<8;++k){
                char a;
                cin>>a;
                v.push_back(a);                    
            
            }            
            w.push_back(v);
        }
        int c;
        for(int j=0;j<8;++j){
            int l =0;
            int p=0;             
            for(int k =0 ;k<8;++k){
                if(w[j][k]=='#'){
                    l=l+1;
                    p =k+1;
                }               
            
            }
            if(l==1 && c==2){
                cout<<j+1<<" "<<p<< endl;
                break;                
            }           
            c=l;
        }

    }
    
  
    
}