/**
 * Dynamic Memory allocation in C++
*/
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	/* code */
	/**
	 * 1. You can allocate dynamic memory through "new" keyword
	 * This dynamically allocates memory at runtime and makes a pointer to it
	 * When you use new to allocate for memory, the value is stored in the heap. You need to free the memory address which you can free from any place where you can access it.
	 *
	 * To free a memory block you allocated, free it by deleting it and reassign it to a nullptr; delete memory
	 * It's also possible to initialize the pointer with a valid address upon declaration, and equally assign a value to it if you please
	 * int *ptr_num {new int {24}} //Uniform initialization
	 * int *ptr_num2 {new int (44)} // Direct initialization
	 * delete ptr_num;
	 * delete ptr_num2
	 * ptr_num = nullptr, ptr_num2 = nullptr;
	 */

	int *ptr_int = new int;
	int *ptr_int2 {nullptr};
	ptr_int2 = new int;

	*ptr_int = 567;
	*ptr_int2 = 127;

	cout << "First Pointer: " << *ptr_int << endl;
	cout << "Second Pointer: " << *ptr_int2 << endl;

	delete ptr_int2; // Avoid deleting a memory location twice (double free) This could cause your program to crash or cause undefined behaviour! Avoid like a plague!
	ptr_int2 = nullptr;

	return 0;
}
