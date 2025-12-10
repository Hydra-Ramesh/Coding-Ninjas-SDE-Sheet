#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n == 1) {
        cout << 1;
        return 0;
    }
    if (n == 2) {
        cout << 1;
        return 0;
    }

    int t1 = 1;
    int t2 = 1;
    int t3;

    for (int i = 3; i <= n; i++) {
        t3 = t1 + t2;
        t1 = t2;
        t2 = t3;
    }

    cout << t2;
    return 0;
}
