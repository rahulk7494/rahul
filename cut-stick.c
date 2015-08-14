/*
Input Format
The first line contains a single integer N.
The next line contains N integers: a0, a1,...aN-1 separated by space, where ai represents the length of ith stick.

Output Format
For each operation, print the number of sticks that are cut, on separate lines.

Constraints
1 ≤ N ≤ 1000
1 ≤ ai ≤ 1000

Sample Input #00

6
5 4 4 2 2 8

Sample Output #00

6
4
2
1

Sample Input #01

8
1 2 3 4 3 3 2 1

Sample Output #01

8
6
4
1

Explanation

Sample Case #00 :

sticks-length        length-of-cut   sticks-cut
5 4 4 2 2 8             2               6
3 2 2 _ _ 6             2               4
1 _ _ _ _ 4             1               2
_ _ _ _ _ 3             3               1
_ _ _ _ _ _           DONE            DONE

Sample Case #01

sticks-length         length-of-cut   sticks-cut
1 2 3 4 3 3 2 1         1               8
_ 1 2 3 2 2 1 _         1               6
_ _ 1 2 1 1 _ _         1               4
_ _ _ 1 _ _ _ _         1               1
_ _ _ _ _ _ _ _       DONE            DONE

Copyright © 2015 HackerRank.
All Rights Reserved
*/

#include<stdio.h>

int main()
{
	int n,n1,i,min=1000;
	scanf("%d",&n);
	n1=n;
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]<=min)
			min=a[i];
	}
	while(n1>0)
	{
		int t=1000;	
		int c=0;
		for(i=0;i<n;i++)
		{
			if(a[i]>=min)
			{
				a[i]-=min;
				if(a[i]==0)
					n1--;
				else if(a[i]<=t)
					t=a[i];				
				c++;
			}	
		}
		min=t;
		printf("%d\n",c);
	}
	return 0;
}
