/*
5
    *
   *A*
  *A*A*
 *A*A*A*
*A*A*A*A*
*/

#include <stdio.h>

int main(){
	int n,i,j;
	scanf("%d", &n);    
	for(i=0;i<=n;i++)
	{
		for(j=0;j<=n-i-1;j++)
		{
			printf(" ");
		}
		for(j=0;j<2*i-1;j++)
		{
			if(j%2==0)
			printf("*");
			else
			printf("A");
		}
		printf("\n");
	} 
}
