#include <iostream>
#include <string>

using namespace std;

typedef double SCALAR;

enum Grade
{
	A,
	B,
	C,
	D,
	F
};

struct StudentRecord
{
	string firstName;
	string lastName;
	string className;
	SCALAR gradePercent;
	Grade gradeLetter;
};

struct ClassRecord
{
	StudentRecord student1;
	StudentRecord student2;
	StudentRecord student3;
};

int main()
{
	StudentRecord george;
	george.firstName = "George";
	george.lastName = "Smith";
	george.className = "Calculus 1";
	george.gradeLetter = B;
	george.gradePercent = 0.87;

	ClassRecord calculus;
	calculus.student1 = george;

	calculus.student2.firstName = "Adam";
	calculus.student2.lastName = "Smith";
	calculus.student2.className = "Calculus 1";
	calculus.student2.gradeLetter = C;
	calculus.student2.gradePercent = 0.71;

	cout << "First Name: " << george.firstName << endl << endl;

	return 0;
}