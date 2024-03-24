#include<iostream>
using namespace std;

class MyClass{
    private:
         int salary;
         
         
    public:
          //Setter
         void setSalary(int s){
             salary = s;
             
         }
         //Getter
         int getSalary(){
             return salary;
         }
};


int main(){
    
    MyClass myObj;
    myObj.setSalary(5000);
    cout << myObj.getSalary();
    
    
    return 0;
}