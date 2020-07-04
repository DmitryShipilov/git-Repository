#include <iostream>
#include <string>

int main()
{

	std::string str("Hello");
	str += std::string("second commit");

	std::cout << "Second master commit\n";
	std::cout << "This will be cherry picked\n";
	const int a = 0;

	return 0;
}
