#include<iostream>
#include<string>

using namespace std;

class Animal {

    protected :

    string name;

    public :

    Animal() {}
    Animal(string aName){

        name = aName;
    }
    virtual void speak() {}
    void song() {

        cout <<name << "'s song" <<endl;
        speak();
        cout<<"la la la la" <<endl;
        speak();
        cout <<endl;
    }
};

class Cat : public Animal {

    public :

    Cat() {}
    Cat(string aName) : Animal(aName) {}
    void speak() {
         cout << "Meow...Meow..Meow" <<endl;
    }
};

class Dog : public Animal {

    public :

        Dog(){}
        Dog(string aName) : Animal(aName) {}
        void speak() {

        cout <<"Bow...Bow...." <<endl;
        }
};



int main() 
{

    Animal *ani[3];

    ani[0] = new Cat("Micky the Cat");
    ani[1] = new Dog("Nero the Dog");
    ani[2] = new Animal("No Name");

        for(int i=0; i<3; i++) {

            ani[i]->song();
            }

   


    return 0;
}