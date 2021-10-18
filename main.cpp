#include <iostream>

namespace Circle {
	std::string message() {
		return "This is Circle";
	}
}

namespace Rectangle {
	std::string message() {
		return "This is Rectangle";
	}
}

int main() {

	std::cout << Circle::message() << std::endl;
	std::cout << Rectangle::message() << std::endl;

	return 0;
}
