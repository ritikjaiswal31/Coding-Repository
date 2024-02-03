#include<iostream>
using namespace std;

bool isEven(int n){
    return (n%2 == 0);
}

int main(){
    
    int n = 248;
    if(isEven(n) == true){
        cout << "Even";
        
    }
    else{
        cout << "Odd";
    }
    
    
    return 0;
}