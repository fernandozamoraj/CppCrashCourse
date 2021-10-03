#ifndef DESCENDANT_EXAMPLE_H
#define DESCENDANT_EXAMPLE_H


#include "EntityClassExample.h"
class DescendantExample :
    public EntityClassExample
{
private:
    string _name;
public:

	DescendantExample();
	~DescendantExample();

	//copy constructor
	DescendantExample(const DescendantExample& other);

	//assignment operator
	DescendantExample operator=(const DescendantExample& other);
    string toString() const;
	string getName();
	void setName(string name);

};

#endif