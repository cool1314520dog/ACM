    #include <stdio.h>  
    #include <string.h>  
      
    int main()  
    {  
        int abc, de, x, y, z, i, ok, count = 0;  
        char s[20], buff[100];  
        scanf("%s", s);  
      
        for (abc = 100; abc < 999; abc++)  
        {  
            for (de = 10; de < 99; de++)  
            {  
                x = abc * (de % 10);  
                y = abc * (de / 10);  
                z = abc * de;  
                sprintf(buff, "%d%d%d%d%d", abc, de, x, y, z);  
                ok = 1;  
                for (i = 0; i < strlen(buff); i++)  
                    if (strchr(s, buff[i]) == NULL)  
                        ok = 0;  
                if (ok)  
                {  
                    printf("<%d>/n", ++count);  
                    printf("%5d/nX%4d/n-----/n%5d/n%4d/n-----/n%5d/n", abc, de, x, y, z);  
                }  
            }  
        }  
        printf("The number of solutions = %d/n", count);  
        return 0;  
    }  
