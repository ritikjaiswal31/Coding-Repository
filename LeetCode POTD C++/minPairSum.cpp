class Solution {
public:
    int minPairSum(vector<int>& nums) {
        //Sort the array
        sort(nums.begin(), nums.end());
        //Initialize Pointers
        int left = 0, right = nums.size()-1;
        //Initialize a Variable
        int minMaxPairSum = INT_MIN;
        //Pairing Elements
        while(left<right){
            //Calculate Current Pair Sum
            int currPairSum = nums[left] + nums[right];
            //Update Minimum of Maximum Pair
            minMaxPairSum = max(minMaxPairSum, currPairSum);
            //Move Pointers Towards the Center
            left++;
            right--;
        }
        //Return Result
        return minMaxPairSum;
    }
};