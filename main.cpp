#include <iostream>

using namespace std;

namespace Circle {
	string message() {
		return "This is Circle";
	}
}

namespace Rectangle {
	string message() {
		return "This is Rectangle";
	}
}

int main() {

	cout << Circle::message() << endl;
	cout << Rectangle::message() << endl;

	return 0;
}
