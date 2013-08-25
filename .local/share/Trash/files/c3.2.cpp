#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int cmp(const void *a, const void *b)
{
     return(*(char *)a-*(char *)b);
}


int main()
{
char input_ch1[ 1001 ] , input_ch2[ 1001 ] ;
while( gets(input_ch1) )
{
   gets(input_ch2);

   int len1 , len2 ;
   len1 = strlen( input_ch1 );
   len2 = strlen( input_ch2 );

   qsort(input_ch1,strlen(input_ch1),sizeof(input_ch1[0]),cmp);
   qsort(input_ch2,strlen(input_ch2),sizeof(input_ch2[0]),cmp);

   int i , j , k ;

   k = 0 ;
   for( i = 0 ; i < len1 ; i ++ )
   {
    for( j = k ; j < len2 ; j ++ )
     if( input_ch1[ i ] == input_ch2[ j ] )
     {
      printf("%c",input_ch1[ i ]);
      input_ch2[ j ] = '*';
      k = j ;
      break;
     }
   }
   printf("\n");


}
return 0 ;

}
