#include <iostream>
#include <vector>

template <class T>

void print_container(T& a, T& b)
{
	for (; a != b; ++a)
	
		std::cout << *a << " ";
}

int main()
{
	std::vector<std::string> my_v{ "one", "two", "three", "four" };
	std::vector<std::string>::iterator i = my_v.begin();
	std::vector<std::string>::iterator j = my_v.end();
	print_container(i, j);

	return 0;
}

