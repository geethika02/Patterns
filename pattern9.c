/*5
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
	int n,i,j;
	scanf("%d", &n); 
	for(i=0;i<n;i++)
	{
		for(j=0;j<i;j++)
		{
			printf("* ");
		}
		printf("\n");
	}  
    for(i=0;i<n;i++)
	{
		for(j=i;j<n;j++)
		{
			printf("* ");
		}
		printf("\n");
	}
}
