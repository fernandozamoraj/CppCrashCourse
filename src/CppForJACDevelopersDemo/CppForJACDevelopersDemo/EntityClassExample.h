#ifndef ENTITYCLASSEXAMPLE_H
#define ENTITYCLASSEXAMPLE_H
#include <iostream>
#include <string>


using namespace std;

class EntityClassExample
{
private:
	int _id;
	string _description;
public:
	EntityClassExample();
	~EntityClassExample();

	//copy constructor
	EntityClassExample(const EntityClassExample& other);

	//assignment operator
	EntityClassExample operator=(const EntityClassExample& other);

	//equality operator...
	//other operators such as >, >=, <, <=, != can also be overloaded if neede
	//entity needs this at least for finding item within a collection and sorting
	bool operator==(const EntityClassExample& other);

	int getId() const;
	string getDescription() const;
	void setId(int id);
	void setDescription(string description);
	virtual string toString() const;

};

#endif
