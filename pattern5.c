/*
2
3
5
*
**
***
*
**
***
****
*****
*/

#include <stdio.h>

int main(){
	int t,i,j;
	scanf("%d",&t);
	while(t--){
	int n;
	scanf("%d", &n); 
	for(i=0;i<n;i++)
{
	for(j=0;j<=i;j++)
	{
		printf("*");
	}

	printf("\n");
}
	
	
	}
}  
