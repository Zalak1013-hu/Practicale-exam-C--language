#include<stdio.h>
int main()
{
	int year;
	
	printf("Enter the leap year:");
	scanf("%d",&year);

	if((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
	{
		printf("It is a leap year");
	}
	else
	{
		printf("It is a not leap year");
	}
	
	return 0;
}
