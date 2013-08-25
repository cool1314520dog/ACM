#include<stdio.h>
int main()
{
	int lines;
	printf("Enter value of lines:");
	scanf("%d",&lines);
	for(int i=1;i<=lines;i++)
	{
		for(int j=1;j<=i;j++)
		{
			if (i%2==0)			//ÅŒÊýÐÐ 
			{
				if (j%2==0)		//ÅŒÊýÁÐÎª1
				{
					printf("1 ");
				}
				else
				{
					printf("0 ");
				}
			}
			else				//ÆæÊýÐÐ
			{
				if (j%2!=0)		//ÆæÊýÁÐÎª1
				{
					printf("1 ");
				}
				else
				{
					printf("0 ");
				}
			}
		}
		printf("\n");
	}
	return 0;
 }
