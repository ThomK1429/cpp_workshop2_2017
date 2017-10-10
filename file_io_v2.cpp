#include <iostream>	
#include <istream>
#include <fstream>						// 1
#include <string>

using namespace std;


int main() {

	// declare variables
	string firstName;
	string lastName;

	string addr1;

	string houseNum;
	string street;

	string city;
	string state;

	string zip;

	// declare the in/out files
	ifstream inFile;					//2a
	ofstream outFile;					//2a

	// open the files
	inFile.open("inputFile.txt");		//3
	outFile.open("outputFile.txt");		//3
	

	// processing goes here
	inFile >> firstName >> lastName;
	cout << "Name: " << firstName << " " << lastNam
	getline(inFile, addr1);			//p156

	// ignore the rest of the line
	//inFile.ignore(100, '\n');			// p135 


	cout << "addr1=" << addr1 << endl;
	getline(inFile, addr1);				//p156
	cout << "addr1=" << addr1 << endl;
	getline(inFile, addr1);				//p156
	cout << "addr1=" << addr1 << endl;


	// close the files
	inFile.close();						//2b
	outFile.close();					//2b

	cout << endl;
	system("pause");					// Windows only
	return 0;

}



/* inputFile.txt data

Fred Smith
12 Main Street
Apt. 2b
Somewhere  Outofstate
12345

*/

/* Results

Name: Fred Smith
addr1=
addr1=12 Main Street
addr1=Apt. 2b

Press any key to continue . . .

*/

/* Results with ignore
Name: Fred Smith 
addr1 = 12 Main Street
addr1 = Apt. 2b
addr1 = Somewhere  Outofstate

Press any key to continue . . .

*/