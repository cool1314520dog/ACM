#include<cstdio>
#include<stack>
using namespace std;
const int MAXN=1000+10;
int target[MAXN];
int ok=1;
int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        for(int i=1;i<=n;i++)
            scanf("%d",&target[i]);
        int a=1,b=1;
        stack<int>s;
        while(b<=n)
        {
            if(a==target[b])
            {
                a++;
                b++;
            }
            else if(!s.empty()&&s.top()==target[b])
            {
                s.pop();
                b++;
            }
            else if(a<=n)
                s.push(a++);
            else 
            {
                ok=0;
                break;
            }
        }
        printf("%s\n",ok?"Yes":"No");
    }
    return 0;
}
        
