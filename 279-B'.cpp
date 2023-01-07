#include<bits/stdc++.h>
using namespace std;
int main() {
	int n;
	int t;
	cin >> n >> t;
	vector<int> Books (n);
	int sum=0;
	int k = 0;
	int res =0;
	for (int i = 0; i < n; ++i) {
		cin >> Books[i];
		sum = sum + Books[i];
		k = k + 1;
		if (sum > t || k > n) {
			sum = sum - Books[i - (k-1)];
			k = k - 1;
		}
	    res = max(res, k);		
	}
	cout << res;
}  