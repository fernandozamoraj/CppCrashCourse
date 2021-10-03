#include <sstream>
#include "EntityClassExample.h"


EntityClassExample::EntityClassExample() : _id(0), _description(""){

}

EntityClassExample::~EntityClassExample() {
	//Clean up any dynamic memory or resources here
	//e.g. pointers
	// delete [] myDynamicArray
	// clear my stack
}

//copy constructor
EntityClassExample::EntityClassExample(const EntityClassExample& other) {
	setId(other._id);
	setDescription(other._description);
}

EntityClassExample EntityClassExample::operator=(const EntityClassExample& other) {
	setId(other._id);
	setDescription(other._description);

	//don't forget this
	return *this;
}


bool EntityClassExample::operator==(const EntityClassExample& other) {
	return _id == other._id;
}

int EntityClassExample::getId() const {
	return _id;
}

string EntityClassExample::getDescription() const{
	return _description;
}

void EntityClassExample::setId(int id) {
	_id = id;
}

void EntityClassExample::setDescription(string description) {
	_description = description;
}

//notice virtual not used here even though this is virtual
string EntityClassExample::toString() const {
	//Read values into memory stream
	stringstream s1("");
    s1 << _id << " " << _description;

	//extract values as string
	string result = s1.str();

	return result;
}
