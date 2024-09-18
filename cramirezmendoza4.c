// Camila Ramirez Mendoza
// csc-321

#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int x = 0;
	double y = 0.0;
	char a = 'a';
	float z = 0.0;

	printf("enter an integar: ");
	scanf("%d",&x);

	printf("enter a double: ");
        scanf("%lf", &y);

	printf("Enter a character: ");
        scanf(" %c", &a);

	printf("Enter a float: ");
        scanf("%f", &z);


	if(x > 10)
	{
		printf("You wrote an number larger than 10 \n");
	}
	else if(x == 10)
	{
		printf("You input is 10 \n");
	}
	else
	{
		printf("You entered a number less than 10 \n");
	}

	if(y > 43.2)
	{
		printf("You wrote a number bigger than 43.2 \n");
	}
	else
	{
		printf("You entered a number less than 43.2");
	}
	
	if(z > 0) {
        printf("You entered a positive float\n");
   	 }
   	 else if(z < 0) {
        printf("You entered a negative float\n");
   	 }
   	 else {
        printf("You entered zero\n");
   	 }
	
	 if(a == 'a') {
        printf("You entered 'a'\n");
   	 }
   	 else {
       	 	printf("You entered a different character\n");
   	 }
	 
	return EXIT_SUCCESS;
}	
