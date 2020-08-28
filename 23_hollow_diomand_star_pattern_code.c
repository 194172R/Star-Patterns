#include<stdio.h>
int main()
{
	int i,j;
	for(i=10;i>0;i--)
	{
		if(i>5)
		{
			int x=0,z=0;
			while(x<2)
			{
				for(j=0;j<i-5;j++)
				{
					printf("*");
				}
				if(i<10 && i>5)
				{
					while(z<2)
					{
						for(j=5;j>i-5;j--)
						{
							printf(" ");
						}
						z++;	
					}
			
				}
				x++;
			}	
		}
		else
		{
			int x=0,z=0;
			while(x<2)
			{
				for(j=0;j<6-i;j++)
				{
					printf("*");
				}
				if(i>1)
				{
					while(z<2)
					{
						for(j=0;j<i-1;j++)
						{
							printf(" ");
						}
						z++;
					}
				}
				x++;
			}
		}
		printf("\n");
	}
}
