#include <iostream>

using namespace std;

int func(int *pX, int *pY) {
	*pX = *pX + 4;
	*pY = *pY + 4;
}

int main() {
	
	cout << "Pass By Reference\n\n";

	int x = 10;
	int y = 5;

	cout << "X: " << x << endl;
	cout << "Y: " << y << endl;

	func(&x, &y);

	cout << "X: " << x << endl;
	cout << "Y: " << y << endl;

	return 0;
}
