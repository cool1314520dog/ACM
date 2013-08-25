#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std ;
#define M 110
int cap[M][M] , n , m , ma[M][M] ;
int max( int a , int b ){
    if( a > b ) return a ;
    else return b ;
}
int dfs( int i , int j ){
    int u  ;
    if( cap[i][j] == -1 ) return 0 ;
    if( ma[i][j] != 0 ) return ma[i][j] ;
    u = 1 ; //如果当前位置大于上下左右 的任一个则 进行深搜
    if( cap[i][j] > cap[i+1][j] ) u = max( u ,1 + dfs( i + 1 , j )) ;
    if( cap[i][j] > cap[i-1][j] ) u = max( u ,1 + dfs( i - 1 , j )) ;
    if( cap[i][j] > cap[i][j-1] ) u = max( u ,1 + dfs( i  , j - 1)) ;
    if( cap[i][j] > cap[i][j+1] ) u = max( u ,1 + dfs( i  , j + 1)) ;
    return u ;
}
int main()
{
    int i , j ;
    while( scanf( "%d%d" , &n , &m ) != EOF ){
        memset( ma , 0 , sizeof(ma) ) ;
        //下面给地图周围加上标记，防止无限递归、、、
        for( i = 0 ; i <= m + 1 ;i++){
            cap[0][i] = -1 ;
            cap[n+1][i] = -1 ;
        }
        for( i = 0 ; i <= n + 1 ; i++ ){
            cap[i][0] = -1 ;
            cap[i][m+1] = - 1;
        }
        for( i = 1 ; i <= n ;i++)
            for( j = 1 ; j <= m ; j++)
                scanf( "%d" , &cap[i][j] ) ;
        for( i = 1 ; i <= n ; i++)
            for( j = 1 ; j <= m ; j++){
                ma[i][j] = dfs( i , j ) ;
            }
            int k = ma[1][1] ;
        for( i = 1; i <= n ; i++)
            for( j = 1 ;j <= m ; j++){
                if( k < ma[i][j] )
                    k = ma[i][j] ;
            }
            cout << k << endl;
    }
}
