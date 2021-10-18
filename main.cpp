#include <iostream>
#include <cstring>

using namespace std;

// Parent class
class Parent{

	protected:
		string name;

	public:
		void setName(string pname);
		void displayParent();
};

void Parent::setName(string pname){
	name = pname;
}

void Parent::displayParent(){
	cout << "Parent class is called!" << endl;
	cout << "Name is: " << name << endl;
}

// Child class
class Child : public Parent{

	private:
		int age;

	public:
		void setAge(int pAge);
		void displayChild();
};

void Child::setAge(int pAge){
	age = pAge;
}

void Child::displayChild() {
	cout << "Child class is called!" << endl;
	cout << "Age is: " << age << endl;
}


int main() {

	Child ch;

	ch.setName("Thushara");
	ch.setAge(23);

	ch.displayChild();
	ch.displayParent();

	return 0;
}