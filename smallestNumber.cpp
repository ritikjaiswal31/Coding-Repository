//Find the smallest Number in an array

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int smallestNumber(vector<int> &nums){
    sort(nums.begin(), nums.end());
    return nums[0];
}

int main(){

    vector<int> arr1 = {2,3,4,5,6,7};
    vector<int> arr2 = {8,10,5,6,9,1};

    cout << "Smallest element in array is: " << smallestNumber(arr1) << endl;
    cout << "Smallest element in array is: " << smallestNumber(arr2);


    return 0;
}