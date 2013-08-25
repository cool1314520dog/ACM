    #include <iostream>  
    #include <queue>
    #include<cstdlib>
#include<cstring>
    using namespace std;  
      
    struct jobNode  
    {  
        int pos;  
        int pri;  
    };  
      
    queue <jobNode> q;  
    int p[10];  
      
      
    int getNext(int pos)  
    {  
        for(int i=pos;i>0;i--)  
        {  
            if(p[i])return i;  
        }  
        return 0;  
    }  
      
    int main()  
    {  
        int t,n,m;  
        int job[100];  
          
        int i,j,max,count;  
        jobNode jn;  
      
       // freopen("in.txt","r",stdin);  
        cin>>t;  
        for(i=0;i<t;i++)  
        {  
            memset(job,0,sizeof(int)*100);  
            memset(p,0,sizeof(int)*10);  
            cin>>n>>m;  
            count=1;  
            for(j=0;j<n;j++)  
            {  
                cin>>job[j];  
                p[job[j]]++;  
                  
                jn.pos=j;  
                jn.pri=job[j];  
      
                q.push(jn);  
            }  
            max = getNext(9);  
            while(job[m]<max)  
            {  
                while(q.front().pri<max)  
                {q.push(q.front());q.pop();}  
                count++;  
                q.pop();  
                p[max]--;  
                max = getNext(max);  
            }  
            while(q.front().pos!=m)  
            {  
                if(q.front().pri==job[m])count++;  
                q.pop();  
            }  
            while(!q.empty())q.pop();   //注意！不要忘记！  
            cout<<count<<endl;  
        }  
        return 0;  
    }  
