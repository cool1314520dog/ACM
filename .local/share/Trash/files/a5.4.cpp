#include <cstdio>
#include <cstring>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{
    int t,d,sum;
     scanf("%d",&t);
    while(t--){
         sum=0;
         scanf("%d",&d);
        while(d!=0){
             d=d/5;
             sum+=d;
         }
         printf("%d\n",sum);
     }
    return 0;
} 
