#include "Iter.hpp"
#include <iostream>

template <typename T>
void print(const T& element) {
	std::cout << element << " :";
}

int	main()
{
	int arrInteger[] = {7, 8, 6, 9, 1};
	double arrDouble[] = {7.0, 8.0, 6.0, 9.0, 1.0};
	std::string arrString[] = {"Isn't", "it", "cool", "bro", ":)"};
	iter(arrInteger, 5, print);
	std::cout << std::endl;
	iter(arrDouble, 5, print);
	std::cout << std::endl;
	iter(arrString, 5, print);
	std::cout << std::endl;
}
