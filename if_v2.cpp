#include <iostream>

using namespace std;

int main() {

	int var1 = 10;
	int var2 = 20;
	int var3 = 30;


	// An if statement - that is true
	if (var1 == 10)
		cout << "var1 is equal to " << var1 << "." << endl;

	// An if statement - that is not true, and will not cout
	if (var1 == 20)
		cout << "var1 is equal to " << var1 << "." << endl;


	// An if statement - that is not true, and will not cout
	if (var1 == 30)
		cout << "var1 is equal to " << var1 << "." << endl;

	// An if statement - that is   true, and will   cout
	if (!(var1 == 20))
		cout << "var1 is NOT equal to " << var1 << "." << endl;

	if (var1 != 20)
		cout << "var1 is NOT equal to " << var1 << "." << endl;


	cout << endl;
	system("pause"); // Windows only
	return 0;

}




/*

var1 is equal to 10.
var1 is NOT equal to 10.
var1 is NOT equal to 10.

Press any key to continue . . .

*/
