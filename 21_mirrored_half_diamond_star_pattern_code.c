#include<stdio.h>
void main()
{
	int x,y;
	for(x=10;x>0;x--)
	{
		if(x>5)
		{
			for(y=x-6;y>0;y--)
			{
				printf(" ");
			}
			for(y=11-x;y>0;y--)
			{
				printf("*");
			}
		}
		else
		{
			for(y=6-x;y>0;y--)
			{
				printf(" ");
			}
			for(y=x-1;y>0;y--)
			{
				printf("*");
			}
		}
		printf("\n");
	}
}
