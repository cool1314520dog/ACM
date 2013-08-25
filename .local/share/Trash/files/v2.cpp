#include <iostream>
#include<cstring>
using namespace std;
int isright(int);
int main()
{
int n;
cout<<"请输入一个正整数，将输出一个大于他的最小双基回文数\n";
while(cin>>n){
for(int i=n;;i++){
if(isright(i)){
cout<<i<<endl;
break;
}
} 
}
return 0;
}
int isright(int a){
int f=0;//统计各个进制是回文数的个数 
for(int num=2;num<=10;num++){
char str[9];
itoa(a,str,num);
int cont=strlen(str);
for(int i=0;i<=cont/2;i++){
if(str[i]!=str[cont-i-1]) {
f--;
break;
}
}
f++;
}
if(f>=2)
return 1;
else 
return 0;
}
