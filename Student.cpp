#include<iostream>
#include "Student.h"
#include <string>

using namespace std;

void Student::setName(string n) {
	name = n;
}

void Student::getName() {
	cout << "Name: " << name;
}