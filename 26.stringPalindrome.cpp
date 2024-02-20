#include<iostream>
using namespace std;

string isPalindrome(string arr){

    for(int i=0; i<arr.length()/2; i++){
        if(arr[i]!=arr[arr.length()-i-1]){
            return "No";
        }
    }
    return "Yes";
}

int main(){
    string arr = "RitikitiR";
    cout << isPalindrome(arr);
    return 0;
}