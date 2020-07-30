#include<stdio.h>
void main()
{
	int x,y;
	for(x=1;x<=5;x++)
	{
		if(x>2 && x<5)
		{
			for(y=0;y<x;y++)
			{
				if(y==0 || y==(x-1))
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
        	for(y=1;y<=x;y++)
        	{
        		printf("*");
			}
		}
		printf("\n");
	}
}
