#include<stdio.h>
gcc 6-size. c -m32 -o size32 
/**
 * main Entry point 
 *
 * Return Answer 0 (Success)
 */ 
int main(void) 
{	
	print("Size of a char. 1 byte(s)\n", sizeof(char));
	print("Size of an int. 4 byte(s)\n", sizeof(int));
	print("Size of a long int.4 byte(s)\n", sizeof(long int));
	print("Size of a long long int.8 byte(s)\n", sizeof(long long int));
	print("Size of a float. 4 byte(s)\n", sizeof(float)); 
	return (0); 
} 

