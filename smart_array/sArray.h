#pragma once

#include <iostream>

class smart_array {
public:
	smart_array(const int& length);
	smart_array(const smart_array&) = delete;
	~smart_array();
	smart_array& operator=(const smart_array&) = delete;
	void add_element(const int& var);
	int get_element(const int& idx);
private:
	int* array = nullptr;
	int _length = 0;
	int i = 0;
};