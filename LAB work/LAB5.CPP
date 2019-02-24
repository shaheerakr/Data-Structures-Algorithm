# include <conio.h>
# include <stdio.h>

void main()
{
clrscr();
int data[5]={1,2,3,4,5};
int k=0,loc=0,item=30;

//for(int i=0;i<=5;i++)
//{
//if(data[i]==item)
//{
//loc=1;
//break;
//}
//}
//if(loc==0)
//printf("\nThe number is not in the list");
//else
//printf("\nThe number is found at location %d",i+1);
//getch();
//}


while(k<=5)
{
if(data[k]!=item)
{k=k+1;loc=0;}
else if (item == data[k])
loc = k;
printf("\nThe number is found at location %d",k+1);
}
printf("\nThe number is not in the list");
getch();
}
