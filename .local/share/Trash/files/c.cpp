#include<iostream>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);

}
入队算法
typedef  struct node
{
      <datatype>   data;
      struct node *next;
}Qnode;
Qnode * in_queue ( Qnode *p,  <datatype>  x )
{
      Qnode * q;
      q = (Qnode*)malloc( sizeof(Qnode) );    /*取得一个新结点*/
      q->data = x;                   /*将x置入新结点数据域中*/
      q->next = p->next;
      p->next = q;                /*将新结点插在原队列之后*/
      p = q;                           /*p指向新的队尾结点*/
      return ( p );
}

出队算法
Qnode * out_queue ( Qnode *p,  <datatype>  *x )
{
      Qnode * front, *q;
      if ( p->next  ==  p )   /*空队列*/
            exit;
      front = p->next;      /*front指向表头结点*/
      q = front->next;                /*q指向队头元素结点*/
      *x = q->data;
      front->next = q->next;     /*删除队头元素结点*/
      free ( q );
      if ( front->next  == front )     /*原队列只有一个元素时*/
            p = front;
      return ( p );
}
