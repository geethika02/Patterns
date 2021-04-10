/*
5
5555
5555
555
55
5
*/

#include <stdio.h>

int main(){
	int n,k,i,j;
	scanf("%d", &n); 
	k=n;
	for(i=0;i<n;i++)
{
	for(j=i;j<n;j++)
	{
		printf("%d",k);
	}
	printf("\n");
}
}
