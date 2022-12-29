#include<bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t, winner=0;
	cin >> t;
	while (t--) {
		int n, total=0, max=0;
		cin >> n;
		int c[n];
		for (int i=0; i<n; i++){
			cin >> c[i];
			total+=c[i];
			if (i==0) {
				max = c[i];
				winner = i+1;
			} else if (c[i] > max) {
				max = c[i];
				winner = i+1;
			} else if (c[i] == max) {
				winner = 0;
			}	
		}
		if (!winner) cout << "no winner\n";
		else if (c[winner-1] > total/2)
			cout << "majority winner " << winner << "\n";
		else cout << "minority winner " << winner << "\n";
	}
}

