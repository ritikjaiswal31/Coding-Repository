#include<iostream>
using namespace std;

#define NO_OF_CHARS 256

bool areAnagram(char* str1, char* str2){

    int count1[NO_OF_CHARS] = { 0 };
    int count2[NO_OF_CHARS] = { 0 };
    int i;

    for(int i=0; str1[i] && str2[i]; i++){
        count1[str1[i]]++;
        count2[str2[i]]++;
    }
    if(str1[i] || str2[i])
      return false;

    return true;

}

int main(){

    char str1[] = "Geek";
    char str2[] = "for";

    if(areAnagram(str1, str2))
      cout << "Yes";
    else  
       cout << "No";
    return 0;
}