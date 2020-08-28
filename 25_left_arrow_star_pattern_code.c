#include<stdio.h>
int main()
{
	int i,j;
	for(i=9;i>0;i--)
	{
		if(i<10 && i>4)
		{
			for(j=0;j<i-5;j++)
			{
				printf(" ");
			}
			for(j=0;j<i-4;j++)
			{
				printf("*");
			}
		}
		else
		{
			for(j=0;j<5-i;j++)
			{
				printf(" ");
			}
			for(j=0;j<6-i;j++)
			{
				printf("*");
			}
		}
		printf("\n");
	}
}
