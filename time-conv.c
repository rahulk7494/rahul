#include <stdio.h>
#include <stdlib.h>

int main() {

	char a[10];
	int i=0,hh;
	for(i=0;i<10;i++)
		a[i]=getchar();
	if(a[8]=='P')
	{
		hh = ((a[0]-'0')*10) + (a[1]-'0');
		hh += 12;
		if(hh == 24)
			hh = 12;
	}
	else
	{
		hh = ((a[0]-'0')*10) + (a[1]-'0');
		if(hh == 12)
			hh = 0;				
	}
	a[0] = (hh / 10) + '0';
  a[1] = (hh % 10) + '0';
  for(i=0;i<8;i++)
  	fprintf(stdout,"%c",a[i]);
	fprintf(stdout,"\n");
  return 0;
}
