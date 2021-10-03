# CppCrashCourse
### A C++ Crashcourse - Contains examples to get up and running with C++fast specially if you are coming from a C# or Java background

1. C++ has namespaces and they should be used.  The entire standard library is in the standard namespace std.
	1. Which is shared across many different libraries.  It's almost like an oxymoron because it's one namespace but many different libraries.
2. C++ has data types just like C# and Java int, bool, float, double, char, arrays for all of these
3.  In C++ there is no base object like JAC and there is no boxing and unboxing.
4. C++ you must almost always overload 2 operators . The assignment (=) and the equality (==) operator.
5. Everything gets passed around by value and to do otherwise you must specify that with &, *
6. There is no use of new for constructing objects unless they are referenced by a pointer variable.
7. In C++ there are member functions not methods... same thing different name.
8. Getter methods in C++ must be declared const.
	1. void getPropValue() const;
	2. Because of Pass by reference
	3. But mostly this -> Pass by reference but do not modify aka const MyClass &myObject
9. Most classes require you to provide a copy constructor
	1. When passing objects around (e.g. through functions or assignments) they need to be copied over
	2. There is also a move constructor
10. All classes require a destructor
	1. It can be empty or clean up any dynamic memory it owns
11. C++ has no interfaces only abstract classes... in essence abstract classes can do everything interfaces in JAC can do.
12. C++ is compiled directly against the machine and requires no IL or JVM.
13. C++ arrays have no length property - use vectors instead
14. C++ allows type #definitions and just definitions in general
15. C++ allows separation of declaration of classes and functions into h/hpp and cpp files.
16. As such they must be protected with #ifndef and #define
17. key word auto is like the key word var in JAC
18. Pointers are quite common in C++.   
19. C++ has an enhanced for loop (foreach in C#)   for(auto x : myCollection) but it does not work on arrays only Std Template Library collections.
20. C++ can behave almost identically to C if necessary but it shouldn't.
21. Quick overview of a class
	1. Class in single h file
	2. Class separate in h and cpp file
22. Quick overview of pointers
	1. Pointer declaration
	2. Getting value from pointer variable
	3. Pointers to pointers
	4. Stack
	5. Heap
23. Quick overview of inheritance
	1. https://www.geeksforgeeks.org/inheritance-in-c/
24. Quick overview of Templates
25. Quick overview of file IO
26. Quick overview of the standard template library
27. Quick overview of standard C functions (atoi,atof,isdigit,isnumber,toupper,tolower,isupper,islower)
28. Quick overview of arrays and pointers
29. Quick overview of exceptions https://www.cplusplus.com/reference/exception/
30. Quick overview of c strings
31. Overview of a linked list implementation
32. Overview of a stack implementation
33. Overview of a queue implementation
34. Overview of a dynamic array
