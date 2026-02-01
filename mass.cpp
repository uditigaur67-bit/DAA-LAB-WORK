#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int n;
        cin >> n;

        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        int comparisons = 0;
        int shifts = 0;

        // Insertion Sort
        for (int i = 1; i < n; i++) {
            int key = arr[i];
            int j = i - 1;

            while (j >= 0 && arr[j] > key) {
                comparisons++;
                arr[j + 1] = arr[j]; // shift
                shifts++;
                j--;
            }

            // For the failed comparison
            if (j >= 0) {
                comparisons++;
            }

            arr[j + 1] = key;
        }

        // Print sorted array
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;

        // Print comparisons
        cout << comparisons << endl;

        // Print shifts
        cout << shifts << endl;
    }

    return 0;
}