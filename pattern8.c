/*
7
1
21
123
4321
12345
654321
1234567
*/

#include <stdio.h>

int main(){
	int n,i,j;
	scanf("%d", &n); 
	for(i=1;i<=n;i++)
{
		  if(i%2==0)
		  {
			   for(j=i;j>0;j--)
			   printf("%d",j);
		  }
		  else{
			  for(j=1;j<=i;j++)
			  printf("%d",j);
		  }
	  printf("\n");
	}
}

