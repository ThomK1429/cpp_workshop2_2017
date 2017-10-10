#include <iostream>	

using namespace std;


int main() {

	// declare variables
	int i = 0;

	cout << endl;


	// Loop - do while loop https://www.tutorialspoint.com/cplusplus/cpp_loop_types.htm
	// test condition before executing loop body

	// count by 3's
	i = 0;
	do
	{
		cout << i << " ";
		i += 3;
	} while (i <= 21);
	cout << endl;
	cout << endl;



	// count by 3's
	// loop executes at least once
	i = 0;
	do
	{
		cout << i << " ";
		i += 3;
	} while (i <= -1);
	cout << endl;



	cout << endl;





	cout << endl;
	system("pause");					// Windows only
	return 0;
}


/* Results


0 3 6 9 12 15 18 21

0


Press any key to continue . . .
*/