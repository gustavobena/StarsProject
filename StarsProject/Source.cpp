/*
Gustavo Nomura
C++ Fall 2019
Due: September 12
Lab 2
Stars

Write a program that displays a checkerboard pattern made of stars and blanks,
as shown below. A checkerboard is eight squares by eight squares. This will be
easier if you first declare two named string constants representing the two
different row patterns.
Be sure to include appropriate comments in your code, choose meaningful identifiers,
and use indentations.

*/

#include<iostream>
using namespace std;

const string S = " *    *    *    *";
const string Sa = "    *    *    *    *";

int main()

{
	std::cout << S << " \n";
	std::cout << Sa << " \n";
	std::cout << S << " \n";
	std::cout << Sa << " \n";
	std::cout << S << " \n";
	std::cout << Sa << " \n";
	std::cout << S << " \n";
	std::cout << Sa << " \n";
	std::cout << "\n";
	std::cout << "\n";
	std::cout << "\n";
	return 0;
}