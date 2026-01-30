#include<stdio.h>
#include<string.h>
int main()
{
	char str[20];
	int i,freq[123]={0};
	
	printf("Enter the staring:");
	scanf("%s",str);
	
	for (i = 0; str[i] != '\0'; i++)
	{
		 freq[str[i]]++;
	}
	
	for(i=0;i<122;i++)
	{
		if (freq[i] > 0)
        {
            printf("\n %c => %d", i, freq[i]);
        }
	}
	
	return 0;
}
