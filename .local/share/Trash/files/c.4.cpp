#include <stdio.h>
#include <string.h>
int main()
{char s[1000],lable;
 long num,i,l,temp,a[1000],sum,pos;
 while (scanf("%s %c %ld",&s,&lable,&num)!=EOF)
 {l=strlen(s); sum=0;
  if (lable=='/')
  {
   temp=0;
   for (i=0;i<l;i++)
   {temp=temp*10+s[i]-'0';
    if (temp>=num)
    {++sum;
     a[sum]=temp/num;
  temp=temp%num;
    }
    else
    {++sum; a[sum]=0;}
   }
   pos=1;
   while ((a[pos]==0)&&(pos<sum)) ++pos;
   for (i=pos;i<=sum;i++)
   printf("%ld",a[i]);
   printf("\n");
  }
  else
  {
   for (i=0;i<l;i++)
   {sum=sum*10+s[i]-'0';
    sum=sum%num;
   }
   printf("%ld\n",sum);
  }
 }
 return 0;
}
