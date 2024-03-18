#include<bits/stdc++.h>
using namespace std;

int linearSearch(int arr[], int n, int x){
    for(int i=0; i<n; i++)
    if(arr[i] == x)
        return i;
    return -1;
}
int main(void){

    int arr[] = {1,2,3,4,5,6,7,8,9};
    int x = 5;

    int n = sizeof(arr) / sizeof(arr[0]);

    //Functional Call
    int res = linearSearch(arr,n,x);
    (res == -1)
         ? cout << "Element is not present" : cout << "Eement is present at index" << res;

    return 0;
}