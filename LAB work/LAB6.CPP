# include <conio.h>
# include <stdio.h>

void main()
{
clrscr();
int data[5]={31,32,33,34,35};
int loc=0,item=35;
int beg,end,mid;

beg=0,end=4;mid=int((beg+end)/2);

while(data[mid]!=item && beg <= end)
  {
    if (item < data[mid])
	    end=mid-1;
    else
	 {
	    beg=mid+1;
	    //mid=int((beg+end)/2);

	  }
   mid=int((beg+end)/2);
   }


 if (data[mid] == item)
     {
       loc=mid;
       printf("location of item is %d",loc+1);
      }
 else
      printf("Item not found");



getch();
}

