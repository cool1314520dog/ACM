    #include <iostream>  
    #include <queue>  
    #include <cstring>  
    #include <algorithm>  
    using namespace std;  
      
    struct pri  
    {  
        int priority;  
        bool isYours;  
    }arr[101];  
      
    bool cmp(int a,int b)    
    {    
        return a>b;    
    }    
      
    int main()  
    {  
        int t;  
        cin>>t;  
        while(t--)  
        {  
            memset(arr,0,sizeof(pri)*100);  
            int num[101]={0};  
            int a,b;  
            cin>>a>>b;  
            arr[b].isYours=1;  
            queue<pri>q;  
            for(int i=0;i<a;i++)  
            {  
                cin>>num[i];  
                arr[i].priority=num[i];  
                q.push(arr[i]);  
            }  
            sort(num,num+a,cmp);  
            int index=0,time=1;  
            while(q.front().priority!=num[index]||!q.front().isYours)  
            {  
                pri temp=q.front();  
                q.pop();  
                if(temp.priority == num[index])    
                {               
                    index++;    
                    ++time;    
                }    
                else q.push(temp);    
            }  
            cout<<time<<endl;  
        }  
        return 0;  
    }  
