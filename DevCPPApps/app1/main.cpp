#include<iostream>
#include<conio.h>
int main(int argc, char** argv) {
	std::cout << "This is a box" << std::endl;
	std::cout << "This is a pen\n";
	std::cout << "This is a stone" << "\n";
	std::cout << "This is a book " << std::endl;
	
	int num1, num2, num3, num4, sum;
	
	// First approcah for input and output
	// USE OF cout and cin
	std::cout << "Enter 2 numbers: ";
	std::cin >> num1 >> num2;
	sum = num1 + num2;
	std::cout << sum << std::endl;
	
	// Second approcah for input and output
	// USE OF printf AND scanf
	printf("Enter 2 more numbers: ");
	scanf("%d %d", &num3, &num4);
	sum = num3 + num4;	
	printf("Sum is: %d \n", sum);
	
	
	return 0;
}
