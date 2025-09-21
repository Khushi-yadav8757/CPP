#include <iostream>
using namespace std;

int main() {
    int arr[50], n, i, pos, x, search;

    // Taking size of array
    cout << "Enter number of elements (max 50): ";
    cin >> n;

    // Input elements
    cout << "Enter " << n << " elements: ";
    for (i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Display array
    cout << "Array elements are: ";
    for (i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Insert element
    cout << "Enter element to insert: ";
    cin >> x;
    cout << "Enter position (0 to " << n << "): ";
    cin >> pos;

    if (pos < 0 || pos > n) {
        cout << "Invalid Position!" << endl;
    } else {
        for (i = n; i > pos; i--) {
            arr[i] = arr[i - 1];
        }
        arr[pos] = x;
        n++;
    }

    // Display after insertion
    cout << "Array after insertion: ";
    for (i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Search element
    cout << "Enter element to search: ";
    cin >> search;

    bool found = false;
    for (i = 0; i < n; i++) {
        if (arr[i] == search) {
            cout << "Element found at position " << i << endl;
            found = true;
            break;
        }
    }
    if (!found) {
        cout << "Element not found!" << endl;
    }

    return 0;
}
