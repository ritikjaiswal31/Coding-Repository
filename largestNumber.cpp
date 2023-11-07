#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int largestNumber(vector<int> &nums){
    sort(nums.begin(), nums.end());
    return nums[nums.size()-1];
}

int main(){

    vector<int> arr1 = {2,3,4,5,6,7};
    cout << "Largest Number is: " << largestNumber(arr1) << endl;

    return 0;
}