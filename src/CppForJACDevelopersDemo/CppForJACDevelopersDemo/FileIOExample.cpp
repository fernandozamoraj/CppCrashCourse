#include <iostream>
#include <fstream>
#include <string>
#include "FileIOExample.h"

using namespace std;

void readFile() {

	ifstream infile("c:\\temp\\myfile.txt");

	if (infile.is_open()) {
		string line;
		while (getline(infile, line)) {
			cout << line << endl;
		}

		infile.close();
	}
}

void writeFile() {
	ofstream outfile("c:\\temp\\myfile2.txt");

	if (outfile.is_open()) {
		string line;
		
		outfile << "This is a line" << endl;
		outfile << "This is another line" << endl;

		outfile.close();
	}
}