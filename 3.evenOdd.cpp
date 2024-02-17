#include<iostream>
using namespace std;

bool isEven(int n){
    return (n%2==0);
}

int main(){

    int n = 247;
    if (isEven(n) == true){
        cout << "Even" << endl;
    }
    else{
        cout << "Odd" << endl;
    }

    return 0;
}