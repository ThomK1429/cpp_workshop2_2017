// while loop with break example
// from website: https://www.tutorialspoint.com/cplusplus/cpp_break_statement.htm

#include <iostream>
using namespace std;

int main() {
	// Local variable declaration:
	int a = 10;

	// do loop execution
	do {
		cout << "value of a: " << a << endl;
		a = a + 1;
		if (a > 15) {
			// terminate the loop
			//break;
		}
	} while (a < 20);

	cout << endl;
	system("pause");
	return 0;
}





/*  while loop w/o break

value of a: 10
value of a: 11
value of a: 12
value of a: 13
value of a: 14
value of a: 15
value of a: 16
value of a: 17
value of a: 18
value of a: 19

Press any key to continue . . .

*/


/*  while loop w/ break

value of a: 10
value of a: 11
value of a: 12
value of a: 13
value of a: 14
value of a: 15

Press any key to continue . . .

*/