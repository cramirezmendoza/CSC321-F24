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

	if(x > 10)
	{
		printf("You wrote an number larger than 5 \n");
	}
	else if(x == 5)
	{
		printf("You input 5 \n");
	}
	else
	{
		printf("You entered a number less than 5 \n");
	}
	
