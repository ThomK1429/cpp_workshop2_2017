#include <iostream>				
#include <fstream>						// 1

using namespace std;


int main() {

	// declare the in/out files
	ifstream inFile;					//2a
	ofstream outFile;					//2a

	// open the files
	inFile.open("inputFile.txt");		//3
	outFile.open("outputFile.txt");		//3

	// processing goes here

	// close the files
	inFile.close();						//2b
	outFile.close();					//2b

	cout << endl;
	system("pause");					// Windows only
	return 0;

}


