//Maximum Sliding Window Maximum
//Given an array of integers A.  
//There is a sliding window of size B which is moving from the very left of the array to the very right.
#include<iostream>
#include<vector>
#include<deque>
using namespace std;

vector<int> maxSlidingWindow(vector<int>&nums , int k){
    //if the size of the array is 0 or the window size is 0
    if(nums.size() == 0 || k == 0){
        return {};
    }
    deque<int> deq; //create a deque to store the indexes of the elements
    vector<int> result;
    //iterate through the array
    for(int i = 0; i < nums.size(); i++){
        //if the deque is not empty and 
        //the front of the deque is less than the current index
        //remove the front of the deque
        if(!deq.empty() && deq.front() < i - k + 1){
            deq.pop_front();
        }

    }
}




int main(){
    vector<int> nums = {1,3,-1,-3,5,3,6,7};
    int k = 3;
    vector<int> result = maxSlidingWindow(nums, k);
    for(int i = 0; i < result.size(); i++){
        cout << result[i] << " ";
    }
    return 0;
}