class Solution {
public:
    void reverseString(vector<char>& nums) {
        int start = 0;
        int end = nums.size()-1;

        while(start<=end){
            swap(nums[start], nums[end]);
            start++;
            end--;
        }
    }
};