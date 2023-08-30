/**
 * POINTERS IN C++
 *
 * Pretty much the same for C
 * Cant cross assign between pointers of different types
 * int *p_int{nullptr};
 * double double_var{33};
 *
 * p_int = &double_var; //wont work
 *
 * Dereferencing * is for accesing the values stored at an address stored in a pointer. A place in memory
 *
 * You can initialize a char *str with a string linteral. The String literal will be expanded into a character array which is null terminated.
 * Some compilers may refuse
 * char *pmsg {"Hello World!"}
 * Since the string is converted to a const char which will require you to make your string a const
 * const char *pmsg {"Hello World!"}
 * Trying to modify this can be problematic tho. If you need to odify the string, use a character array, to enable you modify
 */
#include <iostream>
using namespace std;

int main(void)
{
	/*char *message {"Hello World!"}; // Treated as a string constant can't modify*/
	/* Always initialize your pointers to nullptr when declared. Also Don't try to dereference a nullptr*/
	const char *message1{"Hello World Again!"};

	// Instead, use pure character array. Ofcourse std::string are better
	// Virtual Memory - A trick that fools your program into thinking it has access to all the memory. Each program is abstracted into a process and each process has access to the memory range of 0 ~ (2^n) -1. Where N is 32 on 32bit systems and 64 on 64 bits.

	// Memory Management Unit defines how programs access memory. All systems of program must be designed to fit the memory map of the OS they're written for.

	// Local variables, function calls are stored in the Stack
	// Heap is where additional memory that can be queried for at run time.
	char message2[] {"Welcome to Programming!"};

	cout << message1 << endl;

	return (0);
}
