#include <bits/stdc++.h>
using namespace std;

int frogJump(int n, vector<int> &heights)
{
    vector<int> dp(n, 0);

    dp[0] = 0;
    if (n > 1)
        dp[1] = abs(heights[1] - heights[0]);

    for (int i = 2; i < n; i++)
    {
        int oneStep = dp[i - 1] + abs(heights[i] - heights[i - 1]);
        int twoStep = dp[i - 2] + abs(heights[i] - heights[i - 2]);
        dp[i] = min(oneStep, twoStep);
    }

    return dp[n - 1];
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;

    while (T--)
    {
        int n;
        cin >> n;

        vector<int> heights(n);
        for (int i = 0; i < n; i++)
            cin >> heights[i];

        cout << frogJump(n, heights) << "\n";
    }

    return 0;
}
