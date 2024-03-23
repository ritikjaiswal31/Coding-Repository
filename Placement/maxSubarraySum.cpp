#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int maxSubArray(vector<int>& nums){
    int maxSum = nums[0];
    int currentSum = nums[0];
    for(int i=1; i<nums.size(); ++i){
         currentSum = max(nums[i], currentSum + nums[i]);
         maxSum = max(maxSum, currentSum);
    }
    return maxSum;
}

int main(){

    vector<int> nums = {-2,-1,-3,4,-1};
    cout << "Maximum subarray sum: " << maxSubArray(nums) << endl;
    return 0;
}