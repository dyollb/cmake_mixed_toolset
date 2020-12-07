#include "../intel/foo.h"

#include <iostream>

int main(int argc, char** argv)
{

	std::cerr << argv[0] << ":" << std::endl;
	std::cerr << Foo2() << std::endl;

	return 0;
}