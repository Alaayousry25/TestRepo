#include <iostream>


int main()
{
	char flag=0;
    while (1) {
	char operand;
	int num1, num2, result;
	std::cin >> num1 >> operand >> num2;
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
	    std::cout << "enter a valid operand , try again\n";
	    flag=1;
	    break;
	}
	if(flag ==0)
		std::cout << "the result is = " << result<<"\n";
    flag=0;
    }
    
}
