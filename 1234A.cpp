#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q;
	cin >> q;
	for (int i = 0; i < q; ++i) {
		int n;
		cin >> n;
		int sum = 0;
		for (int j = 0; j < n; ++j) {
			int x;
			cin >> x;
			sum += x;
		}
		cout << (sum + n - 1) / n << endl;
	}
	
	return 0;
}