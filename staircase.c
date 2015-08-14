#include<stdio.h>

int main()
{
	int n,i,j,k;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(k=0;k<n-i;k++)
			printf(" ");
		for(j=0;j<i;j++)
			printf("#");
		printf("\n");
	}
	return 0;
}
