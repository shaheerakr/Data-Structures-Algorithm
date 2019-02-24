# include <stdio.h>
# include <conio.h>
# define N 5

void main()
{
clrscr();
int data[N];
int max,loc,k,i;
max = loc = i = k = 1;


for(int j=0;j<N;j++)
scanf("%d",&data[j]);

max = data[0];
while (k<=N)
{
     if(max <data[k])
	{
	max = data[k];
	loc=k+1;
	}
k = k+1;
}

 printf("\nlargest element %d, %d",max,loc);

getch();
}
