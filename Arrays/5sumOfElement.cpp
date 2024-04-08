/*#include<bits/stdc++.h>
using namespace std;
int main(){

    int n=5;
    vector<int> arr = {1,2,3,4,5};
    int sum=0;
    for(int i=0; i<n; i++){
        sum+=(double)arr[i];
    }

    cout << "The sum of the elements of the array: " << sum;


    return 0;
}*/

#include<bits/stdc++.h>
using namespace std;
int main(){

    int n=10;
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int initialSum=0;
    cout << "Sum: ";
    cout << accumulate(arr, arr+n, initialSum);


    return 0;
}