#pragma once

#include <iostream>

class smart_array {
public:
	smart_array(const int& length);
	~smart_array();
	void add_element(const int& var);
	int get_element(const int& idx);
private:
	int* array = nullptr;
	int _length = 0;
	int i = 0;
};