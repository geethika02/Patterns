/*
4
1 2 3 4 
8 7 6 5 
9 10 11 12 
16 15 14 13 
*/
#include <stdio.h>

int main(){
	int n,i,j,k=0;
	scanf("%d", &n);   
    for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++){
		if(i%2!=0)
		{
			k++;
            printf("%d ",k);
		}
		if(i%2==0)
		{
            printf("%d ",k);
			k--;
		}
		}
		k=k+n;
		printf("\n");
	}
}
