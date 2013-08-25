#include <iostream>
using namespace std;
int isright(int,int);
int main()
{
int n,i;
while(cin>>n){
for(i=1234;i*n<=98765;i++)
if(i<=9876&&i*n>=12345&&isright(i,i*n))
cout<<i*n<<"/0"<<i<<"="<<n<<endl;
if(i>=10234&&i*n>=56789&&isright(i,i*n))
cout<<i*n<<"/"<<i<<"="<<n<<endl;
}
return 0;
}
int isright(int x,int y){//判断xy是否是由不同的0~9九个数组成的 
int a[10]={0};
for(int i=0;i<5;i++){
a[x%10]++;
x=x/10;
}
for(int i=0;i<5;i++){
a[y%10]++;
y=y/10;
}
for(int i=0;i<10;i++){
if(a[i]!=1) return 0;
}
return 1;
}

