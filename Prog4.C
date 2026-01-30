#include<stdio.h>
int main()
{
	int x,y,temp;
	int *px,*py;
	
	printf("Enter the x:");
	scanf("%d",&x);
	printf("Enter the y:");
	scanf("%d",&y);
	
	px=&x;
	py=&y;
	
	printf("\nBefore swapping:");
	printf("\nx: %d",x);
	printf("\ny: %d",y);
	
	temp=*px;
	*px=*py;
	*py=temp;
	
	printf("\nAfter swapping:");
	printf("\nx: %d",x);
	printf("\ny: %d",y);
	
	return 0;
	
}
