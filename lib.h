#pragma once
class Calculator
{
private:
	float operand1;
	float operand2;
	char operat;
public:
	Calculator(float operand1, char operat, float operand2) : operand1(operand1), operat(operat), operand2(operand2) {}
	float Calculate();
};

