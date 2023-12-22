#include "task5.h"

int main(){
	SmartPointer<int> x_ptr(new int(42));
	SmartPointer<int> y_ptr(new int(13));
	cout << *x_ptr << " " << *y_ptr << "\n";
	
	return 0;
}