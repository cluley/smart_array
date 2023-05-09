#include "sArray.h"

int main()
{
	try {
		smart_array arr(5);
		arr.add_element(1);
		arr.add_element(4);
		arr.add_element(155);
		arr.add_element(14);
		arr.add_element(15);
		std::cout << arr.get_element(2) << std::endl;
	}
	catch (const std::length_error& ex) {
		std::cout << ex.what() << std::endl;
	}

	return 0;
}