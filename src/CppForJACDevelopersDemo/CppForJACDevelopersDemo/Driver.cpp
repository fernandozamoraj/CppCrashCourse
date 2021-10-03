#include <iostream>
#include "NameSpaceExample.h"
#include "DataTypesExample.h"
#include "UsingSTLExample.h"

#include "EntityClassExample.h"
#include "DescendantExample.h"
#include "TemplateExample.h"
#include "FileIOExample.h"

using namespace std;
using namespace fzj;

//forward declarations
void doNameSpaceExample();

void foo() {
	auto i = 0;
	auto x = 3.5;
	auto isX = false;
}

int main() {

	doNameSpaceExample();
	doDataTypes(); //from DataTypesExample.h
	doArrays();
	useCollections();
	doPointers();

	//class and inheritance example
	DescendantExample descendant;
	descendant.setName("Fred Flinstone");
	EntityClassExample* entity = &descendant;
	entity->setDescription("Boss");
	entity->setId(123);
	cout << "******** Inheritance Example **********" << endl;
	cout << entity->toString() << endl;

	//Template examples
	int intArray[] = { 1,2,3 };
	float floatArray[] = { 1.0,2.0,3.0 };
	TemplateExample<int> templateExampleInt;
	TemplateExample<float> templateExampleFloat;

	templateExampleFloat.bubbleSort(floatArray, 3);
	templateExampleInt.bubbleSort(intArray, 3);
	bubbleSort(floatArray, 3);
	bubbleSort(intArray, 3);

	readFile();
	writeFile();
	//input output example
	char choice = 'Y';
	cout << "would you like to continue? (Y,N)" << endl;
	cin >> choice;

	cout << " you selected " << choice << endl;


	return 0;
}


void doNameSpaceExample() {
	//possible because of using namespace statement
	NameSpaceExample nse;
	nse.doFoo();

	//if no using statement used
	fzj::NameSpaceExample nse2;
	nse2.doFoo();

	//possible because of using namespace statement
	doBar();

	//if no using statement used
	fzj::doBar();
}

