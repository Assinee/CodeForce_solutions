#include<bits/stdc++.h>
using namespace std;
int main(){
 int t;
 cin >> t ;
 for (int i =0 ; i <t; ++i ){
     int a;
     int b;
     cin >> a;
     cin >> b;    
     int k=a;
     a= max(a,b);
     b= min(k,b);     
     int d =0; 
     if (a==b){
             d=a/2;
             a=(a/2)*2;
             b=(b/2)*2;
         }else{
             while ( a/3 != 0 && b != 0){
                 int c =a/3; 
                 if (c<=b){
                     a-=3*c;
                     b-=c;
                     d+=c;             
                 }else {
                     a-=3*b;            
                     d+=b;
                     b=0;
                 }
                 int k=a;         
                 a= max(a,b);
                 b= min(k,b);        
                }
            }   
    
     cout << d << endl;
 }  
} /// ne marche pas  voir une autre methode