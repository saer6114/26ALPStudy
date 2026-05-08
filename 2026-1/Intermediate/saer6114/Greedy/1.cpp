#include<bits/stdc++.h>
using namespace std;

int main() {
	char s[1000000];
	int cnt = 1;
    int i;

	cin >> s;

	for (i = 1; s[i] != '\0'; i++) {
		if (s[i] != s[i - 1]) {
			cnt++;
		}
	}
	cout << cnt / 2 << endl;
	return 0;
}