#include <iostream>
#include <limits>
#include "DataTypesExample.h"

using namespace std;

template<typename T>
void showMinMax() {
	cout << "min: " << numeric_limits<T>::min() << endl;
	cout << "max: " << numeric_limits<T>::max() << endl;
	cout << endl;
}


void doDataTypes() {

	bool isTrue = false;
	int count = 0;
	long longCount = 0;
	float grade = 4.5;
	double percentage = 5.5;

	cout << "short:" << endl;
	showMinMax<short>();
	cout << "int:" << endl;
	showMinMax<int>();
	cout << "long:" << endl;
	showMinMax<long>();
	cout << "float:" << endl;
	showMinMax<float>();
	cout << "double:" << endl;
	showMinMax<double>();
	cout << "long double:" << endl;
	showMinMax<long double>();
	cout << "unsigned short:" << endl;
	showMinMax<unsigned short>();
	cout << "unsigned int:" << endl;
	showMinMax<unsigned int>();
	cout << "unsigned long:" << endl;
	showMinMax<unsigned long>();
}



void printArray1(int myArray[], int length) {
	cout << "********** printArray(int myArray[], int length)***********" << endl;
	for (int i = 0; i < length; i++) {
		cout << " " << myArray[i];
	}

	cout << endl;
}

void printArray2(int* myArray, int length) {
	cout << "********** printArray(int *myArray, int length)***********" << endl;
	for (int i = 0; i < length; i++) {
		cout << " " << myArray[i];
	}

	cout << endl;
}

void doArrays() {

	int a1[] = { 0,1,2,3 };
	int a2[3];
	a2[0] = 2;
	a2[1] = 4;
	a2[2] = 6;
	int* a3 = new int[3];

	cout << "Arrays are similar to pointers since the name of the array points to a memory address" << endl;
	cout << "Arrays cannot be returned but the pointer to an array can." << endl;
	cout << "Pointers to Arrays constructed in one function cannot be returned unless they are dynamic" << endl;
	cout << "Arrays do not have a length property... length must be tracked by programmer logic" << endl;
	printArray1(a1, 3);
	printArray2(a1, 3);

	printArray1(a2, 3);
	printArray2(a2, 3);


	printArray1(a3, 3);
	printArray2(a3, 3);

	delete[] a3; //this is necessary fora a3 because it is dynamic
}


void modifyValue(int* val) {
	*val = *val * 2;
}

void doPointers() {

	int a = 10;
	int b = 30;
	int* pA = &a;      //pointer points to address in stack
	int* pB = new int; //pointer points to address in heap
	*pB = 10;

	*pB = 20;
	*pA = 20;

	cout << "value of  a  " << a << endl;
	cout << "value of *pA " << *pA << endl;
	cout << "value of *pB " << *pB << endl;
	cout << "value of &a  " << &a << endl;
	cout << "value of &b  " << &b << endl;

	cout << "value of pA  " << pA << endl;
	cout << "value of pB  " << pB << endl;

	modifyValue(&a);
	cout << "value of a after modifyValue(&a) " << a << endl;
	cout << "value of pA after modifyValue(&a) " << *pA << endl;

	modifyValue(pB);
	cout << "value of pb after modifyValue(&a) " << *pB << endl;
}
