#include<iostream>
#include<cctype>
using namespace std;

int main(){

    char ch;
    ch = 'A';

    if(isalpha(ch)){
        cout << ch << "is alphabet" << endl; 
    }
    else{
        cout << ch << "not alphabet" << endl;
    }
    return 0;
}