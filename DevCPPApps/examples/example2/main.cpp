#include<iostream>
#include<conio.h>
#include<string.h>
/*
This C++ program shows different ways for showing FORMATTED OUTPUT 
*/
int main(int argc, char** argv) {
	int v1, v2;
	v1 = 36;
	v2 = 49;
	printf("The 2 values are %d  %d \n", v1, v2);
	
	// Declare 2 arrays each of 30 characters.
	char msg1[30], msg2[30];
	
	// fill arrays with string literals
	strcpy(msg1, "It is raining");
 	strcpy(msg2, "It is also cold");
 	
 	printf("The 2 messages are \n %s \n %s \n", msg1, msg2);
		
	return 0;
}
