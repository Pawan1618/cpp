#include <iostream>
using namespace std;

int main() {
    int n, n1;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cin >> n1;
    int arr1[n1];
    for (int i = 0; i < n1; i++) {
        cin >> arr1[i];
    }

    bool found = false;

    cout << "Common Elements: ";
    for (int i = 0; i < n; i++) {
        bool isCommon = false;
        for (int j = 0; j < n1; j++) {
            if (arr[i] == arr1[j]) {
                isCommon = true;
                break;
            }
        }
        if (isCommon) {
            bool alreadyPrinted = false;
            for (int k = 0; k < i; k++) {
                if (arr[k] == arr[i]) {
                    alreadyPrinted = true;
                    break;
                }
            }
            if (!alreadyPrinted) {
                cout << arr[i] << " ";
                found = true;
            }
        }
    }

    if (!found) {
        cout << "None";
    }

    return 0;
}