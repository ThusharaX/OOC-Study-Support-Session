#include <iostream>

using namespace std;

void foo(int num) {
	num += 4;
}

int main() {
	
	int x = 5;		// 0x7ffd1da6e24c
	int *y;
	y = &x;
	cout << *y << endl;

	// int num = 5;
	// foo(num);

	// cout << num << endl;

	return 0;
}
