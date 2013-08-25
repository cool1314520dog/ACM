#include<stdio.h>
#include<malloc.h>

int main()
{
	int *a, *b, i, j, n, m, top = 0;
	printf("Input n:");
	scanf("%d", &n);
	a = (int *)malloc(sizeof(int)*(n+1));
	b = (int *)malloc(sizeof(int)*(n+1));
	for(i = 1; i <= n; ++i){
		printf("No.%d:", i);
		scanf("%d", &a[i]);
	}
	i = 1; j = 1;
	while(j <= n){
		if(i == a[j]){
			i++; j++;

		}
		else
			if(top && a[j] == b[top-1]){
					top--; 
					j++;
			}
			else if(i <= n){
				
				b[top++] = i++; 
			}
			else{
				break;
			}

}
	if(!top)
		printf("Ok!!!\n");
	else
		printf("Error!!!\n");

}
