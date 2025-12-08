#include <bits/stdc++.h>
using namespace std;

int searchElement(vector<int> &nums, int target) {
    int low = 0;
    int hi = nums.size() - 1;

    while (low <= hi) {
        int mid = low + (hi - low) / 2;

        if (nums[mid] == target) {
            return mid + 1;
        } else if (nums[mid] < target) {
            low = mid + 1;
        } else {
            hi = mid - 1;
        }
    }
    return -1;
}

int main() {
    int n, target;
    cin >> n;
    vector<int> nums(n);

    for (int i = 0; i < n; i++)
        cin >> nums[i];

    cin >> target;

    cout << searchElement(nums, target);

    return 0;
}
