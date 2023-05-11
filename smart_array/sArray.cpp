#include "sArray.h"

smart_array::smart_array(const int& length) : _length(length) {
	array = new int[length]();
}

smart_array::~smart_array() {
	delete[] array;
}

void smart_array::add_element(const int& var) {
	if (i == _length) throw std::length_error("segmentation fault (core dumped)");
	array[i] = var;
	i++;
}

int smart_array::get_element(const int& idx) {
	if ((idx - 1) > i) throw std::length_error("segmentation fault (core dumped)");
	return array[idx - 1];
}