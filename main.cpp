#include <iostream>
#include "lib.h"
using namespace std;

int main()
{
	double operand1 = 0.0;
	double operand2 = 0.0;
	char operat = '+';

	cout << "Calculator Console Application" << endl << endl;
	cout << "Please enter the operation to perform. Format: a+b | a-b | a*b | a/b"
		<< endl;


	while (true)
	{
		cin >> operand1 >> operat >> operand2;
		Calculator c(operand1, operat, operand2);
		cout << "Result is: " << c.Calculate() << endl;
	}

	return 0;
}