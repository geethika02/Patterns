/*5
ABCDEFEDCBA
ABCDE EDCBA
ABCD   DCBA
ABC     CBA
AB       BA
A         A
AB       BA
ABC     CBA
ABCD   DCBA
ABCDE EDCBA
ABCDEFEDCBA
*/

#include <stdio.h>

int main(){
	int n,i,j;
	scanf("%d", &n);  
	for(i=1;i<=n+1;i++)
	{
		printf("%c",'A' +i-1);
	} 
	for(i=n;i>0;i--)
	{
		printf("%c",'A' +i-1);
	}  
	printf("\n");
	for(i=n;i>1;i--)
	{
    for(j=1;j<=i;j++)
	{
	printf("%c",'A' +j-1);	
	}
	for(j=i;j<=n;j++)
	{
	printf(" ");	
	}
	for(j=i;j<=n-1;j++)
	{
	printf(" ");	
	}
	for(j=i;j>=1;j--)
	{
	printf("%c",'A' +j-1);	
	}
	printf("\n");
	}   
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++){
		printf("%c",'A' +j-1);	
		}
		for(j=i;j<=n;j++)
		{
			printf(" ");
		}
		for(j=i;j<=n-1;j++)
		{
			printf(" ");
		}
		for(j=i;j>=1;j--)
		{
			printf("%c",'A' +j-1);
		}
		printf("\n");
	}
	for(i=1;i<=n+1;i++)
	{
		printf("%c",'A' +i-1);
	} 
	for(i=n;i>0;i--)
	{
		printf("%c",'A' +i-1);
	}  

}
