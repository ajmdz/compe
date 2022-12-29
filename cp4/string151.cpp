/*
	myStr.rfind("string", 0) - finds the last occurrence of the sequence "string" in myStr beginning at or before 0th position 
		If not found, returns	string::npos which denotes pointer is at the end of string
*/
#include<bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	string T = "";
	while (1) {
		string s;
		getline(cin, s);
		if (s.rfind(".......", 0)==0) break;
		T += s;
	}
	cout << T;
}

