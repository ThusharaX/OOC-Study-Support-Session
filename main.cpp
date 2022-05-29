#include <iostream>
#include "Student.h"

using namespace std;

int main() {
  cout << "Header Files\n\n";

	Student s1;

	s1.setName((char*)"Thushara");
	s1.getName();

	return 0;
}