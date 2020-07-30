#include<stdio.h>
void main()
{
	int x,y;
	for(x=0;x<5;x++)
	{
		if(x==0 || x==4)
		{
			for(y=0;y<5;y++)
			{
				printf("*");
			}
		}
		else if(x==1 || x==3)
		{
			for(y=0;y<5;y++)
			{
				if(y==2)
				{
					printf(" ");
				}
				else
				{
					printf("*");
				}
			}
		}
		else
		{
			for(y=0;y<5;y++)
			{
				if(y==1 || y==3)
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
