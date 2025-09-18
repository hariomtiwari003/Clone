#include <iostream>
#include <algorithm> // for sort
using namespace std;

// Function for Binary Search
int binarySearch(int arr[], int n, int key) {
    int left = 0, right = n - 1;

    while (left <= right) {
        int mid = (left + right) / 2;

        if (arr[mid] == key) {
            return mid; // found at index mid
        }
        else if (arr[mid] < key) {
            left = mid + 1; // search right half
        }
        else {
            right = mid - 1; // search left half
        }
    }

    return -1; // not found
}

int main() {
    int n, key;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Sorting the array before binary search
    sort(arr, arr + n);

    cout << "Enter element to search: ";
    cin >> key;

    int result = binarySearch(arr, n, key);

    if (result != -1)
        cout << "Element found at index " << result << " (0-based index)\n";
    else
        cout << "Element not found\n";

    return 0;
}
