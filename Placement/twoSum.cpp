#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target){
    unordered_map<int, int> mp;
    for(int i=0; i<nums.size(); ++i){
        int ans = target-nums[i];
        if(mp.find(ans)!=mp.end()){
            return {mp[ans], i};
        }
        mp[nums[i]]=i;
    }
    return {};
}

int main(){

    vector<int> nums = {2,7,11,15};
    int target = 9;
    vector<int> result = twoSum(nums,target);
    cout << "Ans is: " << result[0] << "," << result[1] << endl;
    return 0;
}