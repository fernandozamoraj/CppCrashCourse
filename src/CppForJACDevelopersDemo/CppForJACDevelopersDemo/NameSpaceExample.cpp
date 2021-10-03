#include <iostream>
#include "NameSpaceExample.h"

using namespace std;

//class definitions do not need namespace wrap
namespace fzj {
	void NameSpaceExample::doFoo() {
		cout << "Hi from NameSpaceExample NameSpaceExample.doFoo()" << endl;
	}
}


//individual functions need namespace wrap
namespace fzj {
	void doBar() {
		cout << "Hi from NameSpaceExample doBar" << endl;
	}
}


