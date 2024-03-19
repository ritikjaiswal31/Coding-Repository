class Solution {
public:
    string largestGoodInteger(string nums) {
        char com;
        int left=0;
        int right=0;
        for(int i=0; i<nums.length()-2; i++){
            if(nums[i] == nums[i+1] && nums[i+1] == nums[i+2]){
                if(com<=nums[i]){
                    left=i;
                    right=i+2;
                    com=nums[i];
                }
            }
        }
        if(com)
          return nums.substr(left, 3);
        return "";
    }
};