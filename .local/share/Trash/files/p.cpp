#define LIST_INIT_SIZE 100
#define LISTINCREMENT 10
typedef struct
{
    elemtype *elem;
    int length;
    int listsize;
}sqlist;

Status InitList_sq(sqlist &L)
{
    L.elem=(elemtype *)malloc(LIST_INIT_SIZE*sizeof(elemtype));
    if(!L.elem)
	exit(OVERFLOW);
    L.length=0;
    L.listsize=LIST_INIT_SIZE;
    return OK;
}


Status ListInsert_sq(sqlist &L,int i,int e)
{
    if(i<1||i>L.length+1)
	return ERROR;
    if(L.length>=L.listsize)
    {
	newbase=(int *)remalloc(L.listsize+LISTINCERMENT*sizeof(int));
	if(!newbase)
	    exit(OVERFLOW);
	L.elem=newbase;
	L.listsize+=LISTINCREMENT;
    }
    q=&(L.elem[i-1]);
    for(p=&(L.elem[l.length-1]);p>=q;p--)
	*(p+1)=&p;
    *q=e;
    ++L.length;
    return OK;
}

Status ListDelete_sq(sq_List &L,int i,elemtype &e)
{
    if(i<1||i>L.length+1)
	return ERROR;
    p=&(L.elem[i-1]);
    e=*p;
    q=L.elem+L.length-1;
    for(++p;p<=q;++p)
	*(p-1)=*p;
    --L.length;
    return OK;
}

