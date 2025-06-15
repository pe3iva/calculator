#include <iostream>

int main() {

	std::cout << '\n';

	std::cout << "Welcome to the calculator!\n\n";
	
	std::cout << "Enter the first number: ";
	double num1{};
	std::cin >> num1;

	std::cout << '\n' << '\n';

	std::cout << "Enter the second number: ";
	double num2{};
	std::cin >> num2;

	std::cout << '\n' << '\n';

	std::cout << "Enter the operator (+, -, *, /): ";
	char op{};
	std::cin >> op;
	
	std::cout << '\n';

	switch (op) {

		case '+':
			std::cout << num1 + num2;
		break;

		case '-':
			std::cout << num1 - num2;
		break;

		case '*':
			std::cout << num1 * num2;
		break;

		case '/':
			std::cout << num1 / num2;
		break;

		default:
			std::cout << "You entered the an invalid operator.\n";
	}
}