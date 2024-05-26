#include <iostream>
#include <vector>

template <class T>

void print_container(const T& a)
{
	for (const auto& c : a)
	
		std::cout << c << " ";
}

int main()
{
	std::vector<std::string> my_v{ "one", "two", "three", "four" };
	print_container(my_v);

	return 0;
}

