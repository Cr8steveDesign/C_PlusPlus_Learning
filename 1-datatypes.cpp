/**
 * Learning C++ with Jenny's Lecture
 * Datatypes in C
*/

#include <iostream>
#include <limits.h>
/*You can use the limits.h header file to access the limits of datatypes*/


namespace stephen {
	/*You can create your own namespace*/
};

using namespace std;

int main(void)
{
	int num1; /*Integer datatype*/
	float num2; /*Float datatypes*/


	/*Type modifiers*/
	unsigned int num3;
	long unsigned int num4;
	/*Small numbers can be saved in a short int - takes just 2bytes*/
	short int num5;
	short unsigned int num6; /*Longer range for the short int*/

	wchar_t non_eng_char = '3'; /*Just dummy assignment for now*/

	bool isGraduate = false; /*Still represented as 0*/
	bool isCoder = true; /*Still represented as 1*/

	cout << isGraduate <<endl; /*endl Writes a new line and flushes the stream*/

	return (0);
}
