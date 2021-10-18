#include <iostream>

using namespace std;

class Student {
	private:
		string name = "Thushara";
		int age = 23;
	public:
		Student();
		~Student();
		void printDetails();
};

Student::Student() {
	cout << "Constructor Called!" << endl;
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
	Student s;

	// s.printDetails();

	return 0;
}
