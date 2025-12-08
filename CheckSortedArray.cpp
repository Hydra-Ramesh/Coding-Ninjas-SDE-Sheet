#include <iostream>
#include <vector>
using namespace std;

int isSorted(int n, vector<int> a) {
    for (int i = 1; i < a.size(); i++) {
        if (a[i - 1] > a[i])
            return 0;
    }
    return 1;
}

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    cout << isSorted(n, a);

    return 0;
}
