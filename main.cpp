#include <iostream>

using namespace std;

class Student {
	private:
		string name;
		int age;
	public:
		void setName(string n) {
			name = n;
		}
		string getName() {
			return name;
		}
};

int main() {
	
	Student s;

	s.setName("Thushara");
	cout << s.getName() << endl;

	return 0;
}
