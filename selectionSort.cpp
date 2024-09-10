#include <iostream>
#include <vector>

using namespace std;

void selectionSort(vector<int>& arr) {
    int n = arr.size();  // Use vector size directly
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]);  // Swap minimum element to its position
    }
}

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    selectionSort(arr);  // Pass the vector by reference

    // Print the sorted array (optional)
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
