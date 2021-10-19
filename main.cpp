#include <iostream>

using namespace std;

class Student {
	private:
		string name = "Thushara";
		int age = 23;
	public:
		Student();
		Student(string n, int a);
		~Student();
		void printDetails();
};

Student::Student() {
	cout << "Constructor Called!" << endl;
}

Student::Student(string n, int a) {
	name = n;
	age = a;
}

Student::~Student() {
	cout << "Destructor Called!" << endl;
}

void Student::printDetails() {
	cout << "Name : " << name << endl;
	cout << "Age : " << age << endl;
}

int main() {
	
	// Object creation
	// Student s;
	Student s2("Ashen", 25);

	// s.printDetails();
	s2.printDetails();

	return 0;
}
