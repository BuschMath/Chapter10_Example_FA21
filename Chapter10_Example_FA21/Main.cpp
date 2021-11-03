#include <iostream>
#include <climits>

using namespace std;

int main()
{
	cout << "Size of:\nchar: " << sizeof(char) << "\n\nshort: " << sizeof(short) << "\n\nint: ";
	cout << sizeof(int) << "\n\nlong: " << sizeof(long) << "\n\nbool: " << sizeof(bool) << "\n\n";

	cout << "Min/Max:\nchar min/max: " << CHAR_MIN << " " << CHAR_MAX << "\n\nshort min/max: ";
	cout << SHRT_MIN << " " << SHRT_MAX << "\n\nint min/max: " << INT_MIN << " " << INT_MAX;
	cout << "\n\nlong min/max: " << LONG_MIN << " " << LONG_MAX << endl;

	return 0;
}