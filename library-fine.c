#include<stdio.h>

int main()
{
	int i,a[6],fine=0;
	for(i=0;i<6;i++)
		fscanf(stdin,"%d",&a[i]);
	if((a[2]-a[5])>0)
		fine=10000;
	else if((a[2]-a[5])==0)
	{
		if((a[1]-a[4])>0)
			fine=500*(a[1]-a[4]);
		else if((a[1]-a[4])==0)
		{
			if((a[0]-a[3])>0)
				fine=15*(a[0]-a[3]);
		}	
	}		
	fprintf(stdout,"%d\n",fine);		
	return 0;
}
