#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>

using namespace std;

char str[100][25];
char word[100][25];

int cmp_string(const void *a, const void *b)
{
    //char *a = (char*)_a;
    //char *b = (char*)_b;
   // return strcmp(a,b);
    return strcmp((char *)a, (char *)b);
}

int cmp_char(const void *a, const void *b)
{
   // char *a = (char*)_a;
    //char *b = (char*)_b;
   // return *a - *b;
    return *(char *)a-*(char *)b;
}

int main()
{
    char tp[25];
    int sl = 0;
    while (scanf("%s", tp), tp[0] != '#')
    {
        strcpy(str[sl++], tp);
    }
    qsort(str, sl, sizeof(str[0]), cmp_string);
    for (int i = 0; i < sl; i++)
    {
        int len = strlen(str[i]);
        for (int j = 0; j < len; j++)
        {
            if ('A' <= str[i][j] && 'Z' >= str[i][j])
                word[i][j] = str[i][j] + ('a' - 'A');
            else
                word[i][j] = str[i][j];
        }
        qsort(word[i], len, sizeof(char), cmp_char);
    }
    for (int i = 0; i < sl; i++)
    {
        int num = 0;
        for (int j = 0; j < sl; j++)
        {
            if (!strcmp(word[i], word[j]))
                num++;
        }
        if (num == 1)
            printf("%s\n", str[i]);
    }

    return 0;
}

