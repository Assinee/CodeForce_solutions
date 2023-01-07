#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
	int b;
	int a;
	cin >> t;
	for (int k = 0; k < t; ++k) {
		int n;
		cin >> n;
		vector<int> seq;
		for (int i = 0; i < n; ++i) {
			int a;
			cin >> a;
			seq.push_back(a);
		}
		int a=n-1;
		int b = n-1 ;
		for (int i = 0; i < n; ++i) {
			if (seq[i] == 0) {
				a = i-1;							
				break;
			}
		}
		for (int j = n - 1; j > a; --j) {
			if (seq[j] == 0 ) {
				b = j+1;				
				break;				
			}			
		}
		cout << b - a<<endl;
	}				
}
