#include<stdio.h>

int main()
{
	int t,i;
	int a[1000];
	scanf("%d",&t);
	while(t--)	
	{
		int n,k,c=0;
		scanf("%d%d",&n,&k);
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
			if(a[i]<=0)
				c++;
		}
		if(c>=k)
			printf("NO\n");
		else
			printf("YES\n");
	}
	return 0;
}
