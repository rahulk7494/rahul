#include<stdio.h>

int main()
{
	float p,m,z;
	int a[100],i,n;
	float res;
	scanf("%d",&n);
	p=m=z=0.0;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]<0)
			m++;
		else if(a[i]>0)
			p++;
		else
			z++;
	}
	printf("%.4f\n",p/n);
	printf("%.4f\n",m/n);
	printf("%.4f\n",z/n);
	return 0;
}
