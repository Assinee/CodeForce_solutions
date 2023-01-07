#include<bits/stdc++.h>
using namespace std;
bool in(int x , vector<int> v){
    for(int i=0;i<v.size();++i){
        if (v[i]==x){
            return true;
        }
    }
    return false;
}
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;++i){        
        int l=0;
        int n;
        cin>>n;
        vector<int> v;       
        for(int j=0;j<n;++j){
            int k;
            cin>>k;
            if(!in(k,v)){
                l+=1;
            }
            v.push_back(k);            
        } 
        if((n-l)%2==1){
            cout<< n-((n-l)/2+(n-l)%2)*2<< endl;
        }else{
            cout<< l<<endl;
        }   
    }                 
        
}