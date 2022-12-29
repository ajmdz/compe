#include<bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	string s,name;
	bool pancake = 0, peasoup = 0;
	int t;
	cin >> t;
	while (t--) {
		int k;
		cin >> k;
		pancake=0;
		peasoup=0;
		for (int i=0; i<=k; i++){
			getline(cin>>ws, s);
			//cin.ignore();
			//getline(cin, s);
			if (i==0) {
				name = s;
				continue;
			} 
			else {
				if (s=="pancakes") pancake=1;
				if (s=="pea soup") peasoup=1;
			}
		}
		if (pancake && peasoup) cout << name << "\n";
	}
	if (!(pancake && peasoup)) cout << "Anywhere is fine I guess\n";
}

