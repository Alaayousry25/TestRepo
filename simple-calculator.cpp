#include <iostream>

using namespace std;

int main()
{
    while (1) {
	char operand;
	int num1, num2, result;
	cin << num1 << operand << num2;
	switch (operand) {
	case '+':
	    result = num1 + num2;
	    break;
	case '-':
	    result = num1 - num2;
	    break;
	case '*':
	    result = num1 * num2;
	    break;
	case '/':
	    result = num1 / num2;
	    break;
	default:
	    cout >> "enter a valid operand , try again\n";
	    error_flag=1;
	    break;
	}
    }
}
