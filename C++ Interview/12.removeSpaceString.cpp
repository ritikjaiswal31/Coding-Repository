#include<iostream>
using namespace std;

string remove_space(string str){
    string ans = "";
    for(char c : str){
        if(c!=' '){
            ans+=c;
        }
    }
    return ans;
}

int main(){

    string str = "Gfg to the moon";
    cout << "Witout spaces: " << remove_space(str) <<endl;

    return 0;
}