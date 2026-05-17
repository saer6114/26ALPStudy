#include <bits/stdc++.h>
using namespace std;
// a^b = a^(b/2) x a^(b/2)		2147483647
long long a, b, c, k; //a 밑, b 지수, c 나눌 값, k 중간계산저장

long long pow(long long b) {
	if (b == 0) return 1; // a^0 = 1
	if (b == 1) return a % c;
	
	k = pow(b/2); //a^10 = a^5 * a^5
	if (b % 2 == 0) return k * k % c; //b가 짝수
	return k * k % c * a % c; //b가 홀수
}

int main() {
	cin >> a >> b >> c; 
	cout << pow(b);

	return 0;
}