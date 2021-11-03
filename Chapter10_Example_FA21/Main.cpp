#include <iostream>

using namespace std;

int main()
{
	int num = 42;
	int* p_num = &num;

	cout << "Number: " << num << endl << endl;
	cout << "Pointer: " << p_num << endl << endl;

	return 0;
}