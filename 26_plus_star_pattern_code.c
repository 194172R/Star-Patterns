#include<stdio.h>
int main()
{
	int i,j;
	for(i=0;i<9;i++)
	{
		for(j=0;j<9;j++)
		{
			if(i==4)
			{
				printf("+");
			}
			else
			{
				if(j==4)
				{
					printf("+");
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
