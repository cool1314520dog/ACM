#include <cstdio>  
#include <cstdlib>  
#include <cstring>  
#include <string>  
#include <map>  
#include <iostream>  
using namespace std;  
map<string,int> m;  
string str[150];  
int count,flag,len,n;  
int main()  
{  
   // freopen("a.txt","r",stdin);  
    scanf("%d",&n);  
    getchar();  
    getchar();  
    while(n--)  
    {  
        m.clear();  
        len=0;  
        count=0;  
        while(getline(cin,str[count]))  
        {  
            if(str[count][0]=='\0') break;  
            len=len+str[count].size();  
            count++;  
        }  
        string q;  
        flag=-1;  
        len=len*2/count;  
        for(int i=0; i<count; i++)  
            for(int j=i+1; j<count; j++)  
                if(str[i].size()+str[j].size()==len)  
                {  
                    string s=str[i]+str[j];  
                    if(m[s]>0) m[s]++;  
                    else m[s]=1;  
                    if(m[s]>flag)  
                    {  
                        flag=m[s];  
                        q=s;  
                    }  
                    s=str[j]+str[i];  
                    if(m[s]>0) m[s]++;  
                    else m[s]=1;  
                    if(m[s]>flag)  
                    {  
                        flag=m[s];  
                        q=s;  
                    }  
                }  
        cout<<q<<endl;  
        if(n) printf("\n");  
    }  
    return 0;  
}  
