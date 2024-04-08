#include<bits/stdc++.h>
using namespace std;

int largestNumber(int arr[], int n){
    int max = arr[0];
    for(int i=0; i<n; i++){
        if(max < arr[i]){
            max = arr[i];
        }
    }
    return max;
}

int main(){

    int arr1[] = {5,7,3,9,2};
    int n = 5;
    int max = largestNumber(arr1, n);
    cout << "Largest Number is: " << max << endl;

    return 0;
}