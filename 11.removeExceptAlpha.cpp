#include<iostream>
#include<string>
#include<cctype>
using namespace std;

string remove_non_alphabets(string str){
    string result = "";
    for(char c:str){
        if(isalpha(c)){
            result+=c;
        }
    }
    return result;
}

int main(){

    string str = "Indi@#a";
    cout<< "Alphabets Only: " << remove_non_alphabets(str) << endl;
    return 0;
}