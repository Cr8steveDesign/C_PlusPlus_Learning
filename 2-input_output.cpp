/**
 * Learning about Input and Output in C++
 * Jenny's Lecture
*/

#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	/* code */

	/**
	 * input stream - Flow of bytes from the input stream <istream>
	 * output stream - Flow of bytes from the memory to output stream <ostream>
	 * cin = standard input
	 * cout = standard output
	 * cerr = print to standard error
	 * clog = To log
	 * - These are predefined objects of types istream (cin) or ostream
	 * >> This is known as INSERTION OPERATORS insert from the stream to the main memory (variable)
	 * << This is known as EXTRACTION OPERATORS (Extract from left to the stream)
	 * :: This operator is used to indicate the namespace from which you're using a particular object/variable/function
	 * You can take multiple inputs in one line on the stream
	 * char name[25];
	 * int age;
	 *
	 * cin>>name>>age;
	 * They're separated by space (that is when it encounters a space it stores to the next variable else it leaves it for the next cin call)
	 */

	/*Receiving a character, a string for name and an integer for age*/

	/*
	The std::string class in C++ takes care of memory allocation, deallocation, and manipulation of the characters within the string.

	It dynamically manages the memory required for the string, allowing you to append, modify, or remove characters without worrying about the underlying memory management.

	This has many drawbacks though. E.g memory overhead
*/

	string firstName;
	string surName; /*Looks like doing this memory is automatically allocated*/
	char grade;
	short int year_birth;

	cout << "Please enter your names grade and year of birth in the order\nFirst Name \t Surname \t Grade \t Year of Birth" << endl;

	/*Single line input separated by spaces*/
	cin >> firstName >> surName >> grade >> year_birth;

	/*Output of variables without format specifiers cool!*/

	system("clear");
	cout << "You have entered:\n"  << firstName << "\t" << surName << endl;
	cout << grade << "\t" << year_birth << endl;
	cout << sizeof(firstName) << endl;

	return 0;
}

