/*
	myStr.find("sss",0) searches the string for the first occurrence of the sequence "sss" starting at or after index 0 of myStr
	return type: size_t or string::npos
*/
#include<bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	string T, P;
	getline(cin, T);	
	getline(cin, P);	
	
	size_t pos = T.find(P);
	if (pos == string::npos){
		cout << -1;
	}	else {
		while (pos != string::npos){
			cout << pos << " ";
			pos = T.find(P, pos+1);
		}
	}
	cout << "\n";
		
}

