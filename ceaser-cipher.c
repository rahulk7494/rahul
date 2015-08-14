/* Input 
    11
    middle-Outz
    2
Output  
    okffng-Qwvb
*/

#include<stdio.h>

int main()
{
	int n,k;
	fscanf(stdin,"%d",&n);
	{
		char a[n];
		int i;
		fscanf(stdin,"%s",a);
		fscanf(stdin,"%d",&k);
		k%=26;
		for(i=0;i<n;i++)
		{
			if(a[i]>=65 && a[i]<=90)	// for uppercase characters
			{
				a[i]-=65;
				a[i]+=k;		// rotating the character
				a[i]%=26;				
				a[i]+=65;		// adding to the starting character
			}	
			else if(a[i]>=97 && a[i]<=122)	// for lowercase character
			{
				a[i]-=97;
				a[i]+=k;		// rotating the character
				a[i]%=26;				
				a[i]+=97;
			}
		}
		fprintf(stdout,"%s\n",a);		
	}
	return 0;
}
