#include<iostream>
using namespace std;

string evenOdd(int n) {
    if (n & 1)
        return "Odd";
    return "Even";
}

int main() {
    int n;
    cin >> n;
    cout << evenOdd(n);
    return 0;
}
