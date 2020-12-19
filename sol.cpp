#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n;
	cin >> n;
	int l=0, r=0;
	for(int i=0; i<n; ++i) {
		int a, b;
		cin >> a >> b;
		if(a==0)
			l++;
		if(b==0)
			r++;
	}
	cout << min(l, n-l)+min(r, n-r) << "\n";
}
