
#include<stdio.h> 
#include<stdlib.h>
#include<math.h>
#define QUEUE 8
#define INITIAL -10000
int a[QUEEN];
void init()
{
    int *p;
    for(p=a;p<a+QUEEN;++p)
    {
        *p=
