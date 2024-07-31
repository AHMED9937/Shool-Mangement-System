#include <iostream>
#include "StudentController.h"

using namespace std;


int main() {

	cout << "hello";

	StudentController a;

	for (int i = 0; i < 2; i++)
	{
		a.Add();

	}
	a.Delete("hello","ahmed");
	a.PrintAll();

	return 0;
}