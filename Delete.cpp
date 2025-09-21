Q.Delete an Element from Array

#include <iostream>
using namespace std;

int main() {
    int arr[50], n, pos, i;

    // Input size
    cout << "Enter number of elements: ";
    cin >> n;

    // Input elements
    cout << "Enter " << n << " elements: ";
    for (i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Display original array
    cout << "Original Array: ";
    for (i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Position to delete
    cout << "Enter position to delete (0 to " << n-1 << "): ";
    cin >> pos;

    if (pos < 0 || pos >= n) {
        cout << "Invalid Position!" << endl;
    } else {
        for (i = pos; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }
        n--; // reduce size
    }

    // Display after deletion
    cout << "Array after deletion: ";
    for (i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
