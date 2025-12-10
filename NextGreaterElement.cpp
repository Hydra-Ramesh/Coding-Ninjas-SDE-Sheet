#include <iostream>
#include <vector>
#include <stack>
using namespace std;

vector<int> nextGreaterElement(vector<int>& arr, int n) {
    vector<int> nge(n, -1);
    stack<int> st;   // FIXED: proper stack declaration

    for (int i = 0; i < n; i++) {
        while (!st.empty() && arr[i] > arr[st.top()]) {
            nge[st.top()] = arr[i];
            st.pop();
        }
        st.push(i);
    }

    return nge;
}

int main() {
    vector<int> arr = {4, 5, 2, 25, 7, 8};
    int n = arr.size();

    vector<int> result = nextGreaterElement(arr, n);

    for (int x : result) cout << x << " ";
    return 0;
}
