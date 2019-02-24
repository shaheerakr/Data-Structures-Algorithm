# include <stdio.h>
# include <conio.h>
#include <iostream>
#include <string>

int main()
{

char p[]={"bcde"};
char t[]={"abcdefghijklmnopqrst"};
int k=0,r=4,s=20,max,loc;

max=s-r+1;

printf("\nOriginal text        %s",t);
printf("\nText to be searched  %s",p);

while(k<=max)
     {
	for(int l=0;l<r;l++)
	    if(p[l]!=t[k+l-1])
	       {
		 k=k+1;
		 loc = 0;
	       }
	    else
		 loc=k;

	if (loc != 0)
	    break;
     }

printf("\nLocation of text   %d",loc);

}
