#include <iostream>

std::string global_str;
int global_int;
int main() {
	std::cout << global_int << std::endl;
	std::cout << global_str << std::endl;

	int local_int;
	std::string local_str;
	std::cout << local_int << std::endl;
	std::cout << local_str << std::endl;
}