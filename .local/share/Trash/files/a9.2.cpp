#include<cstdio>
using namespace std;
int main()
{
    int after_eat,before_eat,day;
    scanf("%d",&day);
    after_eat=1;
    while(day--)
    {
        before_eat=2*(after_eat+1);
        after_eat=before_eat;
    }
    printf("total number of peach is %d\n",before_eat);
    return 0;
}
