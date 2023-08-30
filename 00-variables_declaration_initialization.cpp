/**
 * Declaring and initializing variables in C++
 * auto - for Automatic type inference
 * using the std::cout<< to print output on the terminal
 * */

#include <iostream>
#include <string>

/*using namespace std;  Using this is not so good idea rather use the one below*/
using std::cin;
using std::cout;
using std::string;

int main()
{
		/* Implicit inference of the data type */
		auto name1 = "Omoregie Stephen"; // Using quotes directly
		int age = 29;
		string name = "Omoregie Stephen";

		/*A for in loop*/

		for (int charc : name)
		{
			if (charc == 'O' || charc == 'o')
			{
			cout << charc << '\n';
			}
		}
			// cout << name1 << " " << age << endl;
			// cout << name << " " << age << endl;

			return 0;

}
