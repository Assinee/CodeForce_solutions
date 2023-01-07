#include<bits/stdc++.h>
using namespace std ;
int main(){
    int q ;
    cin>> q;   
    for (int i =0; i< q; ++i){
        int l=0;
        int n ;
        cin>> n;
        vector<string> v;
        for (int j=0; j< n;++j){
            string s;
            cin>> s;
            v.push_back(s);
        } 
        for(int j=0;j<n;++j){
            for(int i=0;i<v[j].length();++i){
               if(v[j][i]!=v[j][v[j].length()-1-i] ){
                   for (int k=j;k<n;++k){
                       if(v[k][i]!=v[k][v[k].length()-1-i] && v[k][i]!=v[j][i]){
                           int a =v[k][i];
                           v[k][i]=v[j][i];
                           v[j][i]=a;
                           break;                           
                       }else if(v[k][v[i].length()-v[j].length()-1-i]!=v[k][v[j].length()-1-i] && v[k][v[j].length()-1-i]!=v[j][v[j].length()-1-i]){
                           int a =v[k][v[j].length()-1-i];
                           v[k][v[j].length()-1-i]=v[j][v[j].length()-1-i];
                           v[j][v[j].length()-1-i]=a;
                           break;
                       }                       
                   } break;                  
               } 
            }
            if(i==v[j].length()-1){
                   ++l;
            };
        } 
        cout<<l<<endl;

    }
    return 0;
}
// a faire apres avec une autre methode moin complexite ne marche pas