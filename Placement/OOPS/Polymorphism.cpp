#include<iostream>
using namespace std;

class Animal{
    public:
        void animalSound(){
            cout << "Animal";
        }
};

//Derived class

class Pig : public Animal{
    public:
        void animalSound(){
            cout << "The pig says: ";
        }
};

class Dog : public Animal{
    public:
        void animalSound(){
            cout << "Dog";
        }
};

int main(){
    
    Animal myAnimal;
    Pig myPig;
    Dog myDog;
    
    myAnimal.animalSound();
    myPig.animalSound();
    myDog.animalSound();
    
    return 0;
}