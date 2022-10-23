#include <bits/stdc++.h>
using namespace std;
int main() {
	string s;
	cin >> s;
	int x = 0;
	int y = 0;
	for( int i = 0; i < s.size(); i++ ){
		if( s[i] == 'z')
			x++;
		else
			y++;
	}
	if(2*x == y )
		cout <<"Yes";
	else
		cout << "No";
}
