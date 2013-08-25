#include <stdio.h>
#include <string.h>
int main(void)
{
    char st1[200]="",st2[200]="";
    int n,lena,lenb,i,k,dec=0,a[200]={0},b[200]={1},c[200]={0};
    while(scanf("%s%d",st1,&n)==2)
    {
        int p=0,s=0,t=strlen(st1)-1,temp=0,j=0;
        while(st1[p]!='.') p++;
        while(st1[s]=='0'&&s<p) s++;
        while(st1[t]=='0'&&t>p) t--;
        dec=t-p;dec*=n;
        for(i=s;i<p;i++)
            st2[j++]=st1[i];
        for(i=p+1;i<=t;i++)
            st2[j++]=st1[i];
        for(i=0;i<j;i++)
           a[i]=st2[j-1-i]-'0';
        lena=strlen(st2);
        lenb=1;
        while(n>0)
        {
            if(n%2==1)
               {
                   for(i=0;i<lena;i++)
                      for(j=0;j<lenb;j++)
                          c[i+j]+=a[i]*b[j];
                    memset(b,0,sizeof(b));
                   for(i=0;i<lena+lenb;i++)
                        {
                            c[i+1]+=c[i]/10;
                            c[i]=c[i]%10;
                        }
                    while(i>=0&&c[i]==0) i--;
                    if(i==-1) i=0;
                    lenb=i+1;
                    for(i=0;i<lenb;i++)
                          b[i]=c[i];
                    memset(c,0,sizeof(c));
               }
            n/=2;
            for(i=0;i<lena;i++)
               for(j=0;j<lena;j++)
                  c[i+j]+=a[i]*a[j];
                memset(a,0,sizeof(a));
                for(i=0;i<lena+lena;i++)
                   {
                            c[i+1]+=c[i]/10;
                            c[i]=c[i]%10;
                    }
                while(i>=0&&c[i]==0) i--;
               if(i==-1) i=0;
               lena=i+1;
               for(i=0;i<lena;i++)
                  a[i]=c[i];
                memset(c,0,sizeof(c));
        }
        i=0;
        while(i<n&&b[i]==0) i++;
        if(lenb-1<dec) {lenb=dec; printf(".");}
        for(j=lenb-1;j>=i;j--)
        {
            printf("%d",b[j]);
            if(j==dec&&j!=i)
                printf(".");
        }


        printf("\n");
        memset(st1,'\0',sizeof(st1));
        memset(st2,'\0',sizeof(st2));
        memset(a,0,sizeof(a));
        memset(b,0,sizeof(b));b[0]=1;
    }
    return 0;
}
