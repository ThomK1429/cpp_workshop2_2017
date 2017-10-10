#include <iostream>	

using namespace std;


int main() {

	// declare variables


	// Say Hello 5x - the long way
	cout << "Hello " << "Hello " << "Hello " << "Hello " << "Hello " << endl;

	// For Loop							// p 295
	// Say Bye 5x - via a for loop	

	for (int i = 0; i < 5; i++) {
		cout << "Bye ";
	}
	cout << endl;

	// count up from 1 to 10
	for (int i = 1; i <= 10; i++) {
		cout << i << " ";
	}
	cout << endl;


	// count down from 10 to 1 
	for (int i = 10; i > 0; i--) {
		cout << i << " ";
	}
	cout << endl;

	// count from 2 to 20 by 2's
	for (int i = 2; i <= 20; i += 2) {
		cout << i << " ";
	}
	cout << endl;
	cout << endl;


	// nested for loop
	// outer loop
	for (int i = 1; i <= 10; i++){

		// inner loop
		//for (int j = 1; j <= 10; j++){
		for (int j = 1; j <= i; j++){
			cout << "*";
		}
		cout << endl;
	}

	cout << endl;
	system("pause");					// Windows only
	return 0;

}


/* Results

Hello Hello Hello Hello Hello
Bye Bye Bye Bye Bye
1 2 3 4 5 6 7 8 9 10
10 9 8 7 6 5 4 3 2 1
2 4 6 8 10 12 14 16 18 20

*
**
***
****
*****
******
*******
********
*********
**********

Press any key to continue . . .

*/

