#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of arrays: ";
    cin >> n;

    int arr1[n], arr2[n], sum[n];

    cout << "Enter elements of first array:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr1[i];
    }

    cout << "Enter elements of second array:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr2[i];
    }

    // Adding arrays element-wise
    for (int i = 0; i < n; i++) {
        sum[i] = arr1[i] + arr2[i];
    }

    cout << "Sum of arrays:\n";
    for (int i = 0; i < n; i++) {
        cout << sum[i] << " ";
    }

    return 0;
}
