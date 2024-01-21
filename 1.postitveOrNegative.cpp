//Write a program to check whether a number is a Positive or Negative Number.

#include<iostream>
using namespace std;

int main(){

    int number;
    number = -100;
    if(number>=0){
        cout << number << "is a positive number" << endl;
    }
    else{
        cout << number << "is a negative number" << endl;
    }

    return 0;
}