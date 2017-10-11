#include <iostream>	
#include <fstream>						// 1
#include <string>

using namespace std;


int main() {

	// declare variables
	string firstName;
	string lastName;

	string addr1;
	string addr2;
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
	outFile << "Name = " << firstName << " " << lastName <<endl;

	inFile.ignore(100, '\n');			// p135

	getline(inFile, addr1 );			//p156
	outFile << "addr1 = " << addr1 << endl;

	getline(inFile, addr2);				//p156
	outFile << "addr2 = " << addr2 << endl;

	inFile >> city >> state;				
	outFile << "city and state = " << city <<  ", " << state <<  endl;
	inFile.ignore(100, '\n');			// p135

	inFile >> zip;
	outFile << "zip = " << zip << endl;
	

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

/*  outputFile.txt 
                                                                                                                                                                                                                                                       
Name = Fred Smith
addr1 = 12 Main Street
addr2 = Apt. 2b
city and state = Somewhere, Outofstate
zip = 12345

*/