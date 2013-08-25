#include<stdio.h>
#include<string.h>

typedef struct
{
    char fvalue;
    char suit;
}Card;

typedef struct
{
    Card pile[56];
    int count;
}Pile;

Pile piles[56];
int n;

int delectpile(int i)
{
    int j;
    for(;i<n;++i)
    {
	for(j=0;j<piles[i+1].count;++j)
	{
           piles[i].pile[j].fvalue=piles[i+1].pile[j].fvalue;
	   piles[i].pile[j].suit=piles[i+1].pile[j].suit;
	}
	piles[i].count=piles[i+1].count;
    }
    n--;
    return 0;
}
int main()
{
    char incard[3],ivalue,isuit;
    int i,flag,never;
    while(1)
    {
	n=flag=0;
	for(i=0;i<52;++i)
	{
	    scanf("%s",incard);
	    if(incard[0]=='#')
	    {
		flag=1;
		break;
	    }
	    ivalue=incard[0],isuit=incard[1];
	    piles[i].pile[0].fvalue=ivalue;
	    piles[i].pile[0].suit=isuit;
	    piles[i].count=0;
	    n++;
	}
	if(flag)
	    break;
	while(1)
	{
	    never=0;
	    for(i=1;i<n;i++)
	    {
		if(i>=3)
		{
		    if(piles[i-3].pile[piles[i-3].count].fvalue==piles[i].pile[piles[i].count].fvalue||piles[i-3].pile[piles[i-3].count].suit==piles[i].pile[piles[i].count].suit)
	             {
			piles[i-3].pile[++(piles[i-3].count)].fvalue=piles[i].pile[(piles[i].count)].fvalue;
			piles[i-3].pile[(piles[i-3].count)].suit=piles[i].pile[(piles[i].count)--].suit;
		     never=1;
		     }
		}
		if(piles[i].count==-1)
		{
		    delectpile(i);
		    break;
		}
		if(never)
		    break;
	    }
	    if(!never)
		break;
	}
	if(n==1)
	    printf("1 pile remaining:%d\n",piles[0].count+1);
	else
	{
	    printf("%d piles remaining :",n);
	    for(i=0;i<n;++i)
		printf("%d",piles[i].count+1);
	    printf("\n");
	}
    }
    return 0;
}



