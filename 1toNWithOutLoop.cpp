#include <bits/stdc++.h>
using namespace std;

void help(int x, vector<int> &ans) {
    if (x == 0) {
        return;
    }
    help(x - 1, ans);
    ans.push_back(x);
}

vector<int> printNos(int x) {
    vector<int> ans;
    help(x, ans);
    return ans;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    vector<int> result = printNos(n);

    cout << "Numbers from 1 to " << n << ": ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
