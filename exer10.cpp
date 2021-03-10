#include <iostream>
#include <string>

void Print2M()
{
	std::cout << "2\x4d\n" << std::endl;
}

void Print2MExtended()
{
	std::cout << "2\t\x4d\n" << std::endl; //\t tab, \x4d 'M', \n newline
}

int main()
{
	Print2M();
	system("pause");

	Print2MExtended();

	return 0;
}