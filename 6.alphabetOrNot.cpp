#include<iostream>
using namespace std;

int main(){

    char ch;
    ch = 'a';
    if(isalpha(ch)){
        cout << ch << "is alphabet" << endl;
    }
    else{
        cout << ch << "is not alphabet" << endl;
    }

    return 0;
}