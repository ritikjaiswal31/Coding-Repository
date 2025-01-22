#include<iostream>
using namespace std;

class A{
    private:
       int val;
    public:
       A(int x){   //One Argument Constructor
        val=x;
       }
       A(){
                //Zero Argument Constructor
       }
}

int main(){

    A a(3);

    return 0;
}