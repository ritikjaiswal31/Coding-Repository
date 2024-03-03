#include<iostream>
using namespace std;
void reverseString(string& s, int n, int i){
    if(n<=i){
        return;
    }
    swap(s[i], s[n]);
    reverseString(s, n-1, i+1);
}
int main(){

    string str = "GeekforGeeks";
    reverseString(str, str.length()-1, 0);
    cout << str << endl;

    return 0;
}