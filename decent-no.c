/*
A Decent Number has the following properties:

    3, 5, or both as its digits. No other digit is allowed.
    Number of times 3 appears is divisible by 5.
    Number of times 5 appears is divisible by 3.

Input Format
The 1st line will contain an integer T, the number of test cases. This is followed by T lines, each containing an integer N. i.e. the number of digits in the number.

Output Format
Largest Decent Number having N digits. If no such number exists, tell Sherlock that he is wrong and print −1.

Constraints
1≤T≤20
1≤N≤100000

Sample Input

4
1
3
5
11

Sample Output

-1
555
33333
55555533333

Explanation
For N=1, there is no such number.
For N=3, 555 is the only possible number.
For N=5, 33333 is the only possible number.
For N=11, 55555533333 and all permutations of these digits are valid numbers; among them, the given number is the largest one.

Copyright © 2015 HackerRank.
All Rights Reserved

*/

#include<stdio.h>

int main()
{
	int t,i;
	scanf("%d",&t);
	while(t--)	
	{
		long int n;
		int k,j,flag1=0,flag2=0;
		scanf("%ld",&n);
		for(k=0;k<n;k++)
		{
			if((n-k)%3==0)
			{	if(k%5==0)
				{
					flag1=1;
					break;
			}	}
		}
		if(flag1==0)
		{
			for(k=0;k<n;k++)
			{
				if((n-k)%5==0)
				{
					if(k%3==0)
					{
						flag2=1;
						break;
				}	}
			}
		}
		if(flag1==1)
		{
			for(j=0;j<n-k;j++)
				printf("5");
			for(i=j;i<n;i++)
				printf("3");
		}
		else if(flag2==1)
		{
			for(j=0;j<n-k;j++)
				printf("3");
			for(i=j;i<n;i++)
				printf("5");
		}
		else
			printf("-1");
		printf("\n");
	}
	return 0;
}
