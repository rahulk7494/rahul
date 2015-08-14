/*
Problem Statement

A square integer is an integer which is the square of any integer. For example, 1, 4, 9, and 16 are some of the square integers as they are squares of 1, 2, 3, and 4, respectively.

Input Format
The first line contains T, the number of test cases. T test cases follow, each in a new line.
Each test case contains two space-separated integers denoting A and B.

Output Format
For each test case, print the required answer in a new line.

Constraints
1≤T≤100
1≤A≤B≤109

Sample Input

2
3 9
17 24

Sample output

2
0

Explanation
Test Case #00: In range [3,9], 4 and 9 are the two square numbers.
Test Case #01: In range [17,24], there are no square numbers.

Copyright © 2015 HackerRank.
All Rights Reserved
*/

#include <stdio.h>
#include <math.h>

int main() {

    int t;
    scanf("%d",&t);
    while(t--)
    {
        int s,e,i,c=0,a=0;
        scanf("%d%d",&s,&e);
        for(i=s;i<=e;)
        {
            a=sqrt(i);
            if(pow(a,2)==i)
                c++;
            i=pow(a+1,2);
        }
        printf("%d\n",c);
    }
    return 0;
}
