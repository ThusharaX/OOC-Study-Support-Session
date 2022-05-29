#include <iostream>

using namespace std;

class Student {
	private:
		string name;
		int age;

	public:
		Student(string name, int age) {
			this->name = name;
			this->age = age;
		}

		void print() {
			cout << "Name: " << this->name << endl;
			cout << "Age: " << this->age << endl;
		}
};

int main() {
	
	cout << "This Keyword\n\n";

	Student std1("Thushara", 25);

	std1.print();

	return 0;
}
