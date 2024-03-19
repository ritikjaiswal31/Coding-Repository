#include<iostream>
using namespace std;

int main(){

    int a=10, b=20, c=30;
    cout << "The greatest of the among three is: ";
    if(a>=b && b>=c){
        cout << a << endl;
    }
    else if(b>=a && b>=c){
        cout << b << endl;
    }
    else{
        cout << c << endl;
    }
    return 0;
}