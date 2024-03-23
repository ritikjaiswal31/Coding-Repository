#include<iostream>
using namespace std;

int search(int arr[], int N, int x){
    int i;
    for(int i=0; i<N; i++)
      if(arr[i] == x)
        return i;
    return -1;
}
int main(){


    return 0;
}