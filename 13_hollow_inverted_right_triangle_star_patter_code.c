#include<stdio.h>
void main()
{
	int x,y;
	for(x=5;x>0;x--)
	{
		for(y=x;y>0;y--)
		{
			if(x<5 && x>2)
			{
				if(y==x || y==1)
				{
					printf("*");
				}
				else
				{
					printf(" ");
				}
			}
			else
			{
				printf("*");
			}
		}
		printf("\n");
	}
}
