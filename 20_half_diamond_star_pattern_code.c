#include<stdio.h>
void main()
{
	int x,y;
	for(x=9;x>0;x--)
	{
		if(x>4)
		{
			for(y=x-1;y<9;y++)
			{
				printf("*");
			}
		}
		else
		{
			for(y=x;y>0;y--)
			{
				printf("*");
			}
		}
		printf("\n");
		
	}
}
