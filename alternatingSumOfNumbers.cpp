#include <iostream>
#include <vector>
using namespace std;

int sum(const vector<int>& nums) {
    int result = 0;
    for (int i = 0; i < nums.size(); i++) {
        result += (i % 2 == 0 ? nums[i] : -nums[i]);
    }
    return result;
}

int main() {
    int testCases;
    cin >> testCases; // Read the number of test cases

    for (int i = 0; i < testCases; i++) {
        int size;
        cin >> size; // Read the size of the current test case
        vector<int> nums(size); // Initialize the vector with the given size

        for (int j = 0; j < size; j++) {
            cin >> nums[j]; // Read the elements of the vector
        }

        cout << sum(nums) << endl; // Calculate and print the alternating sum
    }

    return 0;
}