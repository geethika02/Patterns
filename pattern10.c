/*
5
1
10
101
1010
10101
*/

#include <stdio.h>

int main(){
	int n,i,j;
	scanf("%d", &n);              		
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			if(j%2!=0)
			printf("1");
			if(j%2==0)
			printf("0");
		}
		printf("\n");
	}
	}
