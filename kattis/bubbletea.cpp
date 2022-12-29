#include<bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n, minPrice=0, money;
	cin >> n;
	int tea[n], allowed[n];
	for (int i=0; i<n; i++){
		cin >> tea[i];
	}

	int m;
	cin >> m;
	int top[m];
	for (int i=0; i<m; i++){
		cin >> top[i];
	}
	
	for (int i=0; i<n; i++){
		int x,y;
		cin >> x;
		while (x--){
			cin >> y;
			if (minPrice==0) minPrice = tea[i]+top[y-1];
			else {
				minPrice = min(minPrice, tea[i]+top[y-1]);
			}
		}
	}
	cin >> money;
	cout << money/minPrice-1 << endl;

}


