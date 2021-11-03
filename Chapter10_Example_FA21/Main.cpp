#include <iostream>

using namespace std;

typedef double SCALAR;

union example
{
	SCALAR s_point;
	float f_point;
	int i_point;
};

int main()
{
	example point;

	point.f_point = 3.14;
	point.i_point = 42;

	cout << point.f_point << " " << point.i_point << endl << endl;

	return 0;
}