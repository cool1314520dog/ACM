#include<iostream>
#include<cstdio>
#include<string.h>
#include<stdlib.h>
using namespace std;
#define N 300 

int sum[N], a[N], b[N];
int num;

int main(){
	char d[6];	
	int n, i, j, l, t, s;	
	while(cin >> d >> n){	
		int m = 5;		
		memset(a, 0, sizeof(a));	
		memset(b, 0, sizeof(b));		
		for(i = 0; i < 6; i++)	
			if (d[i] == '.')	
				num = (5 - i), num *= n;	
			else 
				b[--m] = d[i] - '0';		
		for(i = 0; i < 5; i++)	
			a[i] = b[i];		
	
		for(i = 1; i < n; i++){
			memset(sum, 0, sizeof(sum));	
			for(j = 0;j < 5; j++)					
				for(l = j, s = 0;s < N; s++)	
					sum[l++] += a[j] * b[s];	
			for(t = 0;t < N; t++){
					sum[t + 1] += sum[t] / 10;					
					sum[t] %= 10;	
					b[t] = sum[t];	
			}	
		}		
		
		for(j = N;j >= 0; j--)	
			if (num == j || sum[j])	
				break;	
		for(i = 0;i <= j; i++)	
			if (sum[i])	
				break;						
		if (j == num){
			if (sum[j])
				cout << sum[j] << ".";
			else 
				cout << "."; 
			j--;				
		}		
		for(t = j;t >= i; t--){	
			cout << sum[t];
			if (t == num)
				cout << ".";
		}	
		cout << endl;	
	}
	return 0;
}

