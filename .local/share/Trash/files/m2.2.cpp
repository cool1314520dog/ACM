#include <stdio.h>

int main()

{     int n, S[18];

      while(scanf("%d", &n) == 1 && n)

      {      for(int i = 0; i < n; i++)

                    scanf("%d", &S[i]);

             int result[172], count = 0;      

             //result数组用来存各连续子序列的值，子序列的个数为n(n+1)/2

             for(int i = 0; i < n-1; i++)  //求出各连续子序列的值，存在数组result中

             {      result[count] = S[i];

                    for(int j = i+1; j < n; j++)

                    {      count++;

                           result[count] = result[count-1] * S[j];   

                    }

                    count++;

             }

             int mid = result[0];   //找出result中的最大值，为所求的值

             for(int i = 1; i < count; i++)

                    mid = (mid > result[i]) ? mid : result[i];

             if(mid > 0)

                    printf("%d\n", mid);

             else

                    printf("-1\n");

      }

      return 0;

}
