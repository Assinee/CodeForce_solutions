#include<bits/stdc++.h>
using namespace std;

int main(){
    int t ;
    cin >> t;
    for (int i =0 ; i<t; ++i){
		int a;
		cin>>a;
		int  m=1;
		int k=0;
		int l=0;
		if(a%2==0){
			cout<<"0"<<endl;			
		}else{
			while(m!=0){				
				m=a/ int(pow(10,k));
				++k;				
		
				if(m%2==0 && m != 0){
					l=k;					
				} 				
			}			
			if(l!=0 && l!=k-1){
				cout<<"2"<<endl;
			}else if ( l==0){
				cout<<"-1"<<endl;
			}else{
				cout<<"1"<<endl;
			} 			
		}			
	}			
}