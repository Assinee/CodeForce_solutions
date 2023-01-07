# include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;++i){
        int n;
        cin>>n;        
        vector<int> b;
        for(int j=0;j<n;++j){
            int l; 
            cin>>l;
            b.push_back(l);
        } 
        for(int j=0;j<n/2;++j){            
                cout<<b[j]<<" "<<b[n-1-j]<<" ";             
        } 
        if (n%2==1){
            cout<<b[n/2]<<" "<<endl;
        }else{
            cout<<endl;
        }        
    }
}