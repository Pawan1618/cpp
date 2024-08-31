#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of students: ";
    cin >> n;

    // Initialize an array to store the names
    string names[n];
    cout << "Enter the names of the students: ";
    for (int i = 0; i < n; ++i) {
        cin >> names[i];
    }

    // Print the initial order
    cout << "Initial order: ";
    for (int i = 0; i < n; ++i) {
        cout << names[i] << " ";
    }
    cout << endl;

    // Selection sort to sort names in alphabetical order
    for (int i = 0; i < n - 1; ++i) {
        int minIndex = i;
        for (int j = i + 1; j < n; ++j) {
            if (names[j] < names[minIndex]) {
                minIndex = j;
            }
        }
        // Swap the found minimum element with the first unsorted element
        if (minIndex != i) {
            string temp = names[i];
            names[i] = names[minIndex];
            names[minIndex] = temp;
        }

        // Print the array after each iteration
        cout << "After Iteration " << i + 1 << ": ";
        for (int k = 0; k < n; ++k) {
            cout << names[k] << " ";
        }
        cout << endl;
    }

    // Print the final sorted order
    cout << "Sorted order: ";
    for (int i = 0; i < n; ++i) {
        cout << names[i] << " ";
    }
    cout << endl;

    return 0;
}
