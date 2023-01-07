#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0; i<t;++i){
        string s;
        cin>>s;
        string res;
        for(int j =0;j<s.length();++j){
            bool inRes = false;
            for(int k =0;k<res.length();++k){
                if(res[k]==s[j]){
                    inRes =true;
                }
            }
            if(s[j]!=s[j+1] && !inRes){
                res=res+s[j];
            }
            else if (s[j]==s[j+1]){
                ++j;
            }            
        }
        sort(res.begin(),res.end());        
        cout<<res<<endl;

    }
}