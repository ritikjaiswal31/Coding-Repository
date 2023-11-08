#include<iostream>
using namespace std;

void bubbleSort(int arr[], int n){
    for(int i=n-1; i>=0; i--){
        for(int j=0; j<=i-1; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
            }
        }
    }
    cout << "After using Bubble Sort: " << "\n";
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << "\n";
}

int main(){

    int arr[] = {12,46,24,52,20,9};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Before using Bubble Sort: " << endl;
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";

    }
    cout << endl;
    bubbleSort(arr,n);

    return 0;
}