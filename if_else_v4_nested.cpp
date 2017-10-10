#include <iostream>

using namespace std;




int main() {

	int var1 = 10;
	int var2 = 20;
	int var3 = 30;



	if (var1 == 5) {
		cout << "var1 is equal to 5 ";
		cout << var1 << "." << endl;
	}
	else if (var1 == 7){
		cout << "var1 is equal to 7 ";
		cout << var1 << "." << endl;
	}
	else if (var1 == 12){
		cout << "var1 is equal to 12 ";
		cout << var1 << "." << endl;
	}
	else {
		cout << "var1 is NOT equal to 5, 7, 12, but is equal to ";
		cout << var1 << "." << endl;
	}



	cout << endl;
	system("pause"); // Windows only
	return 0;

}


var1 is NOT equal to 5, 7, 12, but is equal to 10.

Press any key to continue . . .