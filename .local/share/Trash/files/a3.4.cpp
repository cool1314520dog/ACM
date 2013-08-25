#include<iostream>
#include<string>
#include<cstring>
#include<algorithm>
#include<fstream>
using namespace std;
char s[100];
//bool cmp(char a,char b){
//return a<b;
//}
int main()
{
int n;
cin>>n;
while(n--){
cin>>s;
int len=strlen(s);
sort(s,s+len);
cout<<s<<endl;
while(next_permutation(s,s+len)){
cout<<s<<endl;
}
cout<<endl;
}
return 0;
}
