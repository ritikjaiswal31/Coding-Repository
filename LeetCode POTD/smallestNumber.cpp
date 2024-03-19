//Find the smallest Number in an array

//Method-1: Sorting

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


//Method-2: Using a min variable

#include<bits/stdc++.h>
using namespace std;

int smallestElement(int arr[], int n){
    int min = arr[0];
    for(int i=0; i<n; i++){
        if(min>arr[i]){
            min=arr[i];
        }
    }
    return min;
}

int main(){

    int arr1[] = {2,3,4,5,6};
    int n = 5;
    int min = smallestElement(arr1, n);
    cout << "Smallest Element int the array is: " << min << endl;


    return 0;
}