#include<iostream>
using namespace std;

void bubble_sort(int arr[], int n){
    for(int i=n-1; i>=0; i--){
        for(int j=0; j<=i-1; j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
            }
        }
    }

    cout << "After using bubble sort: " << "\n";
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << "\n";
}

int main(){

    int arr[] = {5,4,3,2,1};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Before sorting: " <<  endl;
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";

    }
    cout << endl;
    bubble_sort(arr,n);
    
    return 0;
}