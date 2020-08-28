#include<stdio.h>
int main()
{
	int i,j;
	for(i=9;i>0;i--)
	{
		if(i>4)
		{
			for(j=0;j<9;j++)
			{
				if(j==9-i || j==i-1 )
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
			for(j=0;j<9;j++)
			{
				if(j==i-1 || j==9-i)
				{
					printf("*");
				}
				else
				{
					printf(" ");
				}
			}
		}
		printf("\n");	
	}
}
