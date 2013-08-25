#include<iostream>
#include<vector>
using namespace std;
int main(){
int n,m;
vector<int> ivec;
while(cin>>n){
if(n==0) break;
for(int i=0;i<n;i++){
cin>>m;
ivec.push_back(m);
}
long long max=-1;
long long tem=1;
for(vector<int>::iterator iter1=ivec.begin();iter1<ivec.end();iter1++)
for(vector<int>::iterator iter2=ivec.begin();iter2<ivec.end();iter2++){
for(vector<int>::iterator iter=iter1;iter<=iter2;iter++){
tem=tem*(*iter);
if(tem>max)
max=tem;
}
tem=1;
}
cout<<max<<endl;
ivec.clear();
}
return 0;
}
