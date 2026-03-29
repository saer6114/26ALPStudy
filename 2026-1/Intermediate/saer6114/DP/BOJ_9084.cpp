#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int T;
	cin >> T;

	while (T--)
	{
		int N;
		cin >> N;
		vector<int> coins(N+1);
		vector<int> dp;

		for (int i = 0; i < N; i++) 
            cin >> coins[i];

		int M; 
        cin >> M;
        
		dp.resize(M + 1);
		dp[0] = 1;

		for (int i = 0; i < N; i++)
		{
			for (int j = coins[i]; j <= M; j++)
			{
				dp[j] = dp[j] + dp[j - coins[i]];
			}
		}
		cout << dp[M] << endl;
	}
}