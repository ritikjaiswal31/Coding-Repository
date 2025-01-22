#include<iostream>
using namespace std;

void selectionSort(int arr[], int n){
    for(int i=0; i<n-1; i++){
        int ans;
        for(int j=i+1; j<n; j++){
            if(Arr[j] < arr[ans]){
                ans = j;
            }
        }
        int temp = arr[ans];
        arr[ans] = arr[i];
        arr[i] = temp;
    }

    cout << "After Selection Sort: " << "/n";
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << "\n";
}

int main(){

    int arr[] = {5,4,3,2,1};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Before Selection Sort: " << "\n";
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";

    }

    cout << "\n";
    selectionSort(arr,n);
    return 0;
}