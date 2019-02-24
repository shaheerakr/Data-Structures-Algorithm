# include <stdio.h>
# include <conio.h>

void index();
void del();
void insert();

char p[]={"bcde"};
char t[]={"abcdefghijklmnopqrst"};
char c = 'x';

int k=0,r=4,s=20,max,loc;

void main()
{
clrscr();

printf("\nOriginal text             %s",t);
printf("\nText to be replaced       %s",p);
printf("\nCharacter to be inserted  %c",c);

index();
del();
insert();

printf("\nText after replacement    %s",t);
getch();

}


void index()
{
max=s-r+1;
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
}

void del()
{
for(int i=1;i<=4;i++)
    {
       for(int j=loc-1;j<=s;j++)
	   t[j]=t[j+1];
    }
}

void insert()
{
for(int j=s;j>=loc-1;j--)
 {
      t[j+1]=t[j];
 }
 j=j+1;
 t[j]=c;
}
