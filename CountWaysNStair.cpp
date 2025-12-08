#include <iostream>
using namespace std;

int countDistinctWays(int n) {
    const int MOD = 1000000007;

    if (n == 0) return 1;
    if (n == 1) return 1;

    long long prev2 = 1;  // dp[i-2]
    long long prev1 = 1;  // dp[i-1]

    for (int i = 2; i <= n; i++) {
        long long curr = (prev1 + prev2) % MOD;
        prev2 = prev1;
        prev1 = curr;
    }

    return prev1;
}

int main() {
    int n;
    cin >> n;

    cout << countDistinctWays(n);

    return 0;
}
