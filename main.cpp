#include <iostream>

using namespace std;

void func(int *pX, int *pY) {
	*pX = *pX + 4;
	*pY = *pY + 4;
}

int main() {
	
	cout << "Pass By Reference\n\n";

	int x = 10;
	int y = 5;

	// Before
	cout << "X: " << x << endl;
	cout << "Y: " << y << endl;

	func(&x, &y);

	// After
	cout << "X: " << x << endl;
	cout << "Y: " << y << endl;

	return 0;
}
