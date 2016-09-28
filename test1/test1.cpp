#include <iostream>

int main()
{

	int a;
	int b;
	int c;

	std::cout << "Input value: ";
	std::cin >> a;
	std::cout << "Input second value: ";
	std::cin >> b;

	c = a + b;
	
	std::cout << "Sum of two values:" << std::endl;
	std::cout << c << std::endl;

	return 0;

}
