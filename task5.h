#pragma once

#include <iostream>

using namespace std;

template <typename T>
class SmartPointer {
private:
	T* data;
public:

	SmartPointer(T* value) {
		data = value;
	}

	SmartPointer() {
		data = nullptr;
	}

	~SmartPointer() {
		delete data;
	}
	
	T& operator * () {
		return *data;
	}

	T* operator -> () {
		return data;
	}

};