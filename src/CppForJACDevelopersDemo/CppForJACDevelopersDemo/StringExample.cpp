#include "StringExample.h"
#include <string>
#include <iostream>

using namespace std;

void doStringExamples() {

	string s1("");
	string s2("Jim");

	s1 = "My name is " + s2;
	for (int i = 0; i < s1.size(); i++) {
		cout << " " << s1[i] << endl;
	}

	const char* cString = s1.c_str();

	cout << "s1 " << s1 << endl;
	cout << "cString " << cString << endl;
	cout << "s1.substr(3,4): " << s1.substr(3, 4) << endl;

}
