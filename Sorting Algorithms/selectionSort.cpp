#include<bits/stdc++.h>
using namespace std;

void selectionSort(int arr[], int n){
    int i, j, min_idx;

    //one by one move boundry of unsorted subarray
    for(i=0; i<n-1; i++){
        min_idx=i;
        for(j=i+1; j<n; j++){
            if(arr[j] < arr[min_idx])
               min_idx = j;
        }

        //swap the found min element
        //with the first element
        if(min_idx != i)
          swap(arr[min_idx], arr[i]);

    }
}

//print the array
void printArray(int arr[], int size){
    int i;
    for(i=0; i<size; i++){
        cout << arr[i] << " ";
        cout << endl;
    }
}

int main(){

    int arr[] = {5,8,7,6,2};
    int n = sizeof(arr) / sizeof(arr[0]);

    //Functional call

    selectionSort(arr, n);
    cout << "Sorted Array: \n";
    printArray(arr, n);


    return 0;
}