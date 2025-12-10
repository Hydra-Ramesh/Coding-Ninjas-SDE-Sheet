#include <iostream>
#include <vector>
using namespace std;

int findPeakElement(vector<int>& arr) {
    int n = arr.size();
    if (n == 1) return 0;       // Only one element
    if (arr[0] >= arr[1]) return 0;        // First element peak
    if (arr[n-1] >= arr[n-2]) return n-1;  // Last element peak

    int low = 1, high = n - 2; // Exclude boundaries
    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] >= arr[mid-1] && arr[mid] >= arr[mid+1])
            return mid;   // Peak found
        else if (arr[mid-1] > arr[mid])
            high = mid - 1;  // Peak is left
        else
            low = mid + 1;   // Peak is right
    }

    return -1; // Should never reach here
}

int main() {
    vector<int> arr = {1, 3, 20, 4, 1, 0};

    int peakIndex = findPeakElement(arr);

    cout << "Peak Element is: " << arr[peakIndex] 
         << " at index " << peakIndex;

    return 0;
}
