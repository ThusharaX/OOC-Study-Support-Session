#include <iostream>

using namespace std;

void foo(int *num) {
	*num += 4;
}

int main() {
	
	// int x = 5;		// 0x7ffc6ce212c4
	// cout << &x << endl;
	// int *y;
	// y = &x;
	
	// cout << *y << endl;

	int num = 5;
	foo(&num);

	cout << num << endl;

	return 0;
}
