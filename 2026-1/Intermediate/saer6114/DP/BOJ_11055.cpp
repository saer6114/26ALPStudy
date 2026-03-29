#include <bits/stdc++.h>
#define MAX 1001

using namespace std;

int n;
int arr[MAX];
int dp[MAX];

void Input()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
}

void Solution()
{
    int Max = 0;

    for (int i = 1; i <= n; i++)
    {
        dp[i] = arr[i];

        for (int j = 1; j < i; j++)
        {
            if (arr[j] < arr[i] && dp[i] < dp[j] + arr[i])
            {
                dp[i] = dp[j] + arr[i];
            }
        }

        if (Max < dp[i])
            Max = dp[i];
    }

    cout << Max << endl;
}

void Solve()
{
    Input();
    Solution();
}

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    Solve();
    return 0;
}