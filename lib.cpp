#include "lib.h"
#include <iostream>

float Calculator::Calculate()
{
	switch (operat)
	{
	case '+':
		return operand1 + operand2;
	case '-':
		return  operand1 - operand2;
	case '*':
		return operand1 * operand2;
	case '/':
		if (operand2 == 0) { std::cout << "Wrong Enter" << std::endl; return 0.0; }
		return operand1 / operand2;
	default:
		return 0.0;
	}
}
