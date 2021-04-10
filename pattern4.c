/*
5
    * 
   * * 
  * * * 
 * * * * 
* * * * * 
 * * * * 
  * * * 
   * * 
    * 
*/

#include <stdio.h>

int main(){
	int n,i,j,x=0;
	scanf("%d", &n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			printf(" ");
		}
		for(j=0;j<=i;j++)
		{
			printf("* ");
		}
		printf("\n");
	}
	for(i=n-1;i>0;i--)
	{
		for(j=0;j<x+1;j++)
		{
			printf(" ");
		}
		for(j=0;j<i;j++)
		{
			printf("* ");
		}
		printf("\n");
		x++;
	}
}
