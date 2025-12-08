#include <bits/stdc++.h>
using namespace std;

vector<int> generateFibonacciNumbers(int n) {
    vector<int> ans;

    if (n >= 1) ans.push_back(0);
    if (n >= 2) ans.push_back(1);

    for (int i = 2; i < n; i++) {
        ans.push_back(ans[i - 1] + ans[i - 2]);
    }

    return ans;
}

int main() {
    int n;
    cin >> n;

    vector<int> fib = generateFibonacciNumbers(n);
    
    for (int x : fib) {
        cout << x << " ";
    }

    return 0;
}
