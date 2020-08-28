#include<stdio.h>
int main()
{
	int i,j;
	for(i=9;i>0;i--)
	{
		if((i<9 && i>5) || (i<5 && i>1))
		{
			for(j=0;j<5;j++)
			{
				if(j==0 || j==4)
				{
					printf("*");
				}
				else
				{
					printf(" ");
				}
			}
		}
		else 
		{
			for(j=0;j<5;j++)
			{
				if(j==0 || j==4)
				{
					printf(" ");
				}
				else
				{
					printf("*");
				}
			}
		}
		printf("\n");
	}
}
