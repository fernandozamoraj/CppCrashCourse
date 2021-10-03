#include "UsingSTLExample.h"

#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <stack>

using namespace std;

void useCollections() {

	
	//********** stack of letters ***************
	std::stack<char> lettersStack;
	lettersStack.push('a');
	lettersStack.push('b');
	lettersStack.push('c');

	std::cout << "***** lettersStack ******" << endl;
	std::cout << "lettersStack.size() " << lettersStack.size() << endl;
	std::cout << "lettersStack.empty() " << lettersStack.empty() << endl;
	std::cout << "lettersStack.top() " << lettersStack.top() << endl;

	lettersStack.pop();
	std::cout << "lettersStack.top() after pop()" << lettersStack.top() << endl;

	lettersStack.pop();
	std::cout << "lettersStack.top() after pop()" << lettersStack.top() << endl;

	lettersStack.pop();
	std::cout << "lettersStack.size() after pop()" << lettersStack.size() << endl;
	std::cout << "lettersStack.empty() after pop()" << lettersStack.empty() << endl;

	//************ vector of ints ***************	
	std::vector<int> numbers;
	numbers.push_back(0);
	numbers.push_back(1);
	numbers.push_back(2);

	std::cout << "***** vector of numbers []******" << std::endl;
	std::cout << "numbers.size(): " << numbers.size() << endl;
	std::cout << "numbers[0]: " << numbers[0] << endl;
	std::cout << "numbers[1]: " << numbers[1] << endl;
	std::cout << "numbers[2]: " << numbers[2] << endl;


	std::cout << "***** vector of numbers enhanced-for-loop******" << std::endl;
	for (auto x : numbers) {
		std::cout << "numbers " << x << std::endl;
	}

	std::cout << "***** vector of numbers &x enhanced-for-loop******" << std::endl;
	for (auto &x : numbers) {
		x = x * 2;
	}

	for (auto x : numbers) {
		std::cout << "numbers " << x << std::endl;
	}

	//*************** map of word counts **************
	//    item[0].key  item[0].value
	//  
	std::map<std::string, int> wordCounts;
	wordCounts.insert(std::pair<std::string, int>("aardvark", 1));
	wordCounts.insert(std::pair<std::string, int>("auto", 2));
	wordCounts.insert(std::pair<std::string, int>("bear", 1));

	std::cout << "***** Map of word counts ******" << std::endl;
	for (auto x : wordCounts) {
		std::cout << x.first << ": " << x.second << endl;
	}
}