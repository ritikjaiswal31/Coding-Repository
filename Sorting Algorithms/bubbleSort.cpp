#include<iostream>
using namespace std;

void bubbleSort(int arr[], int n){
    int i, j;
    bool swapped;
    for(i=0; i<n-1; i++){
        swapped=false;
        for(j=0; j<n-1; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);
                swapped = true;
            }
        }
        if(swapped == false)
          break;
    }
}

int main(){

    int arr[] = {1,9,90,82,47};
    int n = sizeof(arr) / sizeof(arr[0]);
    bubbleSort(arr, n);
    cout << "Sorted Array: \n";
    printArray(arr, n);
    return 0;
}