#include<stdio.h>

int main()
{
	int t,i,j;
	char s[100000];
	scanf("%d",&t);
	while(t--)	
	{
		int a = 0;
		scanf("%s",s);
		for(i=0,j=1;s[j]!='\0';i++,j++)
		{
			if(s[i] == s[j])
				a++;		
		}
		printf("%d\n",((a==0)?a:abs(a)));
	}
	return 0;
}
