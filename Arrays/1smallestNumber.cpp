#include<bits/stdc++.h>
using namespace std;

int smallestNumber(int arr[], int n){
    int min = arr[0];
    for(int i=0; i<n; i++){
        if(min > arr[i]){
            min = arr[i];
        }
    }
    return min;
}

int main(){

    int arr1[] = {5,7,3,9,2};
    int n = 5;
    int min = smallestNumber(arr1, n);
    cout << "Smallest Number is: " << min << endl;


    return 0;
}