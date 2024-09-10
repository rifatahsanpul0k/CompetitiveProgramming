#include <iostream>
#include <vector>
using namespace std;

vector<int> maxSlidingWindow(vector<int>& nums, int k) {
    // Check for edge cases
    if (nums.size() == 0 || k == 0) {
        return {};
    }
    // Create a vector to store the result
    vector<int> result;
    // Iterate through the array
    for (int i = 0; i <= 5; i++) {
        int max = nums[i]; // Initialize the max element for the current window
        // Iterate through the window
        for (int j = 1; j < 3; j++) { 
            // If the current element is greater than the max element, update the max element
            //cout<<"i: "<< i<<" j: "<<j<<" compared index: "<<i+j-1<<endl;
            if (nums[i + j] > max) {
                max = nums[i + j];
            }
        }

        // Push the max element to the result vector
        result.push_back(max); 
    }

    return result;
}
int main() {
    vector<int> nums = {1, 3, -1, -3, 5, 3, 6, 7};
    
    int k = 3;
    vector<int> result = maxSlidingWindow(nums, k);

    // Print the result
    cout<<"Result: ";
    for (int i : result) {
        cout << i << " ";
    }

    return 0;
}