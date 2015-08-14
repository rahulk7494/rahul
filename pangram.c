#include<stdio.h>

int main()
{
	char a[26];
	char s[1000];
	int i=0;
	fgets (s, 1000, stdin);	
	for(i=0;i<26;i++)
		a[i]=0;
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]>=65 && s[i]<=90)	// for uppercase characters
			s[i]-='A';
		else if(s[i]>=97 && s[i]<=122)	// for lowercase characters
			s[i]-='a';
		if(s[i]<26)						
			a[s[i]]++;
	}
	for(i=0;i<26;i++)
	{
		if(a[i]==0)
		{	
			printf("not pangram\n");		
			return 0;
		}
	}
	printf("pangram\n");	
	return 0;
}
