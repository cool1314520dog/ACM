//对int型数组排序
int num[100];
int cmp(const void *a, const void *b)
{
    return *(int*)a-*(int *)b;
}
qsort(num,100,sizeof(num[0]),cmp);

//对char型数组排序
char str[100];
int cmp(const void *a, const void *b)
{
    return *(char*)a-*(char *)b;
}
qsort(str,100,sizeof(str[0]),cmp);

//对double型数组排序
double arr[100];
int cmp(const void *a, const void *b)
{
    return *(double*)a>*(double*)b?1:-1;
}
qsort(arr,100,sizeof(arr[0]),cmp);

//对字符串排序
char str[100][100];
int cmp(const void *a, const void *b)
{
    return strcmp((char*)a,(char*)b);
}
qsort(str,n,sizeof(str[0]),cmp);
