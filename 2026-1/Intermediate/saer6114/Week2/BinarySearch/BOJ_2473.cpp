#include <bits/stdc++.h>
using namespace std;

long long n;
long long a[5004];
long long ans[4];

long long ret = 1e18; //10의 18승

int main(void){
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	cin >> n;
	for(int i=1; i<=n; i++){
		cin >> a[i];
	}

	sort(a+1, a+1+n);

	for(int i=1; i<=n-2; i++){
		long long st = i+1;
		long long en = n;
		while(st < en){
			long long v = a[i] + a[st] + a[en];
			if(abs(v) < ret){ //세 용액을 합쳤을 때 절대값이 이전에 구했던 합보다 0에 더 가까운지 확인한다.
				ret = abs(v); //ret을 갱신!
				ans[1] = a[i];
				ans[2] = a[st];
				ans[3] = a[en];
			}
			if(v < 0) st++; //합이 0보다 작을 경우 st를 오른쪽으로 한 칸 이동시킨다.
			else en--; //합이 0보다 크거나 같은 경우 en를 왼쪽으로 한 칸 이동시킨다.
		}
	}

	cout << ans[1] << ' ' << ans[2] << ' ' << ans[3];

	return 0;
}
