#include <stdio.h> 
#define LIMIT 10000
int main() 
{ 
	int i,NO=1,flag[11],interval=1;
	for(i=1;i<=10;i++)
	{
		flag[i]=1;	//1±íÊŸ¿ÉÄÜŽæÔÚ
	}
	for (i=1;i<=LIMIT;i++)
	{
		if (NO<=10)
		{
			flag[NO]=0;		//²»ŽæÔÚ
		}
		else
		{
			flag[NO%10]=0;	//²»ŽæÔÚ
		}
		NO=NO+interval+1;
		interval++;
	}
	for (i=1;i<=10;i++)
	{
		if (flag[i]==1)
		{
			printf("ÍÃ×Ó¿ÉÄÜŽæÔÚµÚ%dºÅ¶ŽÖÐ!\n",i);
		}
	}
return 0;
}
