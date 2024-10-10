// Camila Ramirez Mendoza
// CSC 321
// Lab 5
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	// four variables
	int a = 12;
    	float b = 6.3;	 
    	char c = 'a';
    	double d = 4.76;
	
	// array 
	int ar[10] = {0,1,2,3,4,5,6,7,8,9};
	int i = 0;
    	printf("Value of a: %d\n", a);
    	printf("Address of a: %p\n", (void*)&a);
    	printf("Value of b: %.2f\n", b);
    	printf("Address of b: %p\n", (void*)&b);
    	printf("Value of c: %c\n", c);
    	printf("Address of c: %p\n", (void*)&c);
    	printf("Value of d: %lf\n", d); 
    	printf("Address of d: %p\n", (void*)&d);

	if (a > 2) {
		// make a variable in the block
		int e = 13;
		printf("In the if flock: a = %d, e = %d\n", a, e);
	}

	// try using variavle outside of block
	// printf("Outside if block: e = %d\n", e);
	
	printf(" ar[0] = %d\n", ar[0]);
	for(i = 0; i < 10; i++) {
		printf(" ar[%d] = %d and address is %p \n", i, ar[i], &ar[i]);
	}
	
	return EXIT_SUCCESS;
}

