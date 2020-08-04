#include "pch.h"
#include <iostream>
#include <cstdlib>
#include <cstddef>
using  namespace std;
int& add(int &c)
{
	return c;
};
int main()
{
	std::string cpp_string = "sfsere";
	char const * c_string = cpp_string.c_str();

	cout << c_string << endl;
	return 0;
}