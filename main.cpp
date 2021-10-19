#include <iostream>

using namespace std;

class Student {
	private:
		string name;
		string getName() {
			return name;
		}
	public:
		void setName(string n);
		void printName();
		void print() {
			cout << this->name << endl;
		}
};

void Student::setName(string n) {
	name = n;
}

void Student::printName() {
	cout << "Name : " << name << endl;
}

int main() {
	
	// Static
	// Student s1;
	// s1.setName("Thushara");
	// s1.printName();

	// Dynamic
	Student *s2 = new Student();
	s2->setName("Thiwanka");
	// s2->printName();
	s2->print();
	delete s2;

	return 0;
}
