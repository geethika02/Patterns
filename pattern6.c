/*
5
12345
6789
101112
1314
15

*/

#include <stdio.h>

int main(){
	int n,i,j,k=0;
	scanf("%d", &n);
	for(i=1;i<=n;i++)
	{
		for(j=i;j<=n;j++)
		{
			k++;
			printf("%d",k);
		}
		printf("\n");
	}
}
