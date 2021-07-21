#include <iostream>
#include "doubleNum.h"
#include"functionsC.h"
int main(int argc, char** argv)
{

	std::cout << "MathApp\n";
	std::cout << doubleNum(3) << "\n";
	std::cout << functionsC::Cube(3) << "\n";
	return EXIT_SUCCESS;
}