#include<stdio.h>
int main()
{
	int i,j;
	for(i=9;i>0;i--)
	{
		if(i<9 && i>4)
		{
			for(j=0;j<(9-i)*2;j++)
			{
				printf(" ");
			}
		}
		for(j=0;j<i-4;j++)
		{
			printf("*");
		}
		if(i<5)
		{
			for(j=0;j<(i-1)*2;j++)
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
