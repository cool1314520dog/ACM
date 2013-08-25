#include <stdio.h>

int main()
{
bool dong[10]={0};
int lang=0;
for(int i=0;i<100;i++)
{
dong[lang]=true;
lang++;
lang+=i;
lang=lang%10;
}
for(int i=0;i<10;i++)
if(!dong[i]) printf("兔子可能在第%d洞中\n",i+1);
return 0;
}
