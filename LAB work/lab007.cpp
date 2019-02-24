# include <stdio.h>
# include <conio.h>

void main()
{
clrscr();
int data[8]={10,10,3,2,4,6,7,1};

int temp;

for(int i=0;i<8;i++)
      {
          for(int j=i+1;j<8;j++)
              {
                  if(data[i] > data [j])
                      {
                            temp=data[j];
                           data[j] = data [i];
                           data[i] = temp;
                       }
              }
        }

for (int k=0;k<8;k++)
     printf("%d\n",data[k]);

getch();
}
