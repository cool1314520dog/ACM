#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

#define TRUE 1
#define ERROR 0
#define MAX 30

typedef int Status;

typedef struct {
    char option1[30], option2[30], option3[30], option4[30], subject[150];
    char result;
}TestNode;

TestNode Testquestions[MAX];

Status SaveNode(int N)
{
    int i;
    FILE *fp;
    if((fp=fopen("cheng","wb"))==NULL)
        return ERROR;
    for(i=0; i<N; i++)
        fwrite(&Testquestions[i], sizeof(TestNode), 1, fp);
    fclose(fp);
    return TRUE;
}

Status ReadNode(int &N)
{
    FILE *fp;
    int i=0;
    if((fp=fopen("cheng", "rb"))==NULL)
        return ERROR;
    while(!feof(fp))
    {
        fread(&Testquetions[i], sizeof(TestNode), 1, fp);
        i++;
    }
    N=i-1;
    return TRUE;
}

void InputTitle(int N)
{
    int i;
    for(i=0; i<N; i++)
    {
        printf("请输入第%d道题题目:\n", i+1);
        printf("请输入题目:");
        gets(Testquestions[i].subject);
        printf("请输入选项A：");
        gets(Testquestions[i].option1);
        printf("请输入选项B:");
        gets(Testquestions[i].option2);
        printf("请输入选项C:");
        gets(Testquestions[i].option3);
        printf("请输入选项D:")；
        gets(Testquestions[i].option4);
        printf("请输入答案:");
        scanf("%c",&Testquestions[i].result);
        getchar();
        system("cls");
    }
}

Status InsertNode(int &N)
{
    if(N>MAX)
        return ERROR;
    printf("请输入所要插入题题目，题干和选项:\n");
    printf("请输入题目:");
    gets(Testquestions[N].subject);
    printf("请输入选项A:");
    gets(Testquestions[N].option1);
    printf("请输入选项B:");
    gets(Testquestions[N].option2);
    printf("请输入答案:");
    scanf("%c", &Testquestions[N].result);
    getchar();
    N++;
    return TRUE;
}

Status DeleteNode(int n)
{
    return TRUE;
}

void printNode(TestNode p, int n)
{
    printf("(%d)", n);
    printf("%s\n", p.subject);
    printf("   A%s", p.option1);
    printf("   B%s", p.option2);
    printf("   C%s", p.option3);
    printf("   D%s", p.option4);
}

Status Match(TestNode p, char m)
{
    if(m == p.result)
        return TRUE;
    else
        return ERROR;
}

void answer(int sum)
{
    int i, score=0, Num;
    char r;
    for(i=1; i<=sum; i++)
    {
        Num=rand()%sum;
        printNode(Testquestions[Num], Num+1);
        printf("\n请输入答案:");
        scanf("%c", &r);
        getchar();
        if(Match(Testquestions[Num], r))
        {



