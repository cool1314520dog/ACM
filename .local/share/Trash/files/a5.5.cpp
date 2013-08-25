#include<iostream>
#include<cstring>
#include<algorithm>
#include<fstream>
using namespace std;
char s[20];
int main()
{
 int ncase;
 cin>>ncase;
 while(ncase--){
 int a,b;
 cin>>a>>b;
 memset(s,0,sizeof(s));
 for(int i=0;i<a-b;i++){
 s[i]='0';
 }
 for(int i=a-b;i<a;i++){
 s[i]='1';
 }
 cout<<s<<endl;
 while(next_permutation(s,s+a)){
 cout<<s<<endl;
 }
 if(ncase)cout<<endl;
 }
 return 0;
}

