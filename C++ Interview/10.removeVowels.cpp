#include<iostream>
#include<cstring>
using namespace std;

int main(){

    int j=0;
    string str="RitikJaiswal";
    for(int i=0; i<str[i]!='\0'; i++){
        if(str[i]!='a' && str[i]!='e' && str[i]!='i' && str[i] !='o' && str[i]!='A' && str[i]!='E' && str[i]!='I' && str[i]!='O' && str[i]!='U'){
            str[j++] = str[i];
           }
    }

    while(j<str.size()){
        str[j]='\0';
        j++;
    }
    cout << "String without vowels: " << str << endl;

    return 0;
}