#include "DescendantExample.h"




DescendantExample::DescendantExample() : _name(""){

}

DescendantExample::~DescendantExample(){}

//copy constructor
DescendantExample::DescendantExample(const DescendantExample& other) {

	setId(other.getId());
	setDescription(other.getDescription());
	setName(other._name);

}

//assignment operator
DescendantExample DescendantExample::operator=(const DescendantExample& other) {
	//this would fail if getId and getDescription were not const functions
	setId(other.getId());
	setDescription(other.getDescription());
	setName(other._name);
	return *this;
}

string DescendantExample::toString() const {
	string result = EntityClassExample::toString() + " " + _name;

	return result;  
}


string DescendantExample::getName() {
	return _name;
}
void DescendantExample::setName(string name) {
	_name = name;
}
