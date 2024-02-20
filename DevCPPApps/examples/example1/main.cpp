#include<iostream>
#include<conio.h>

/*
This C++ program shows different ways for showing output on the standard 
output stream (which is normally the monitor screen)
*/
int main(int argc, char** argv) {
	std::cout << "This is a box" << std::endl;
	std::cout << "This is a pen\n";
	std::cout << "This is a stone" << "\n";
	
	std::string msg1 = "It is raining.";
	std::string msg2 = "It is also cold.";
	std::cout << msg1 << std::endl << msg2 << std::endl; 
	
	int v;
	v = 100;
	std::cout << "The value is " << v << std::endl;
	
	return 0;
}
