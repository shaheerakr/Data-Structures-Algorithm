#include<iostream>
#include<conio.h>
using namespace std;
void insert(int[],int,int,int);
int main()
{

int ar[50],n,i,num,ins,poc;
cout<<"Enter number of elements:- ";
cin>>n;
cout<<"Enter elements in array:- ";
for(i=0;i<n;i++)
{
 cin>>ar[i];
}
cout<<"Enter element to insert:- ";
cin>>ins;
cout<<"Enter Position to insert:- ";
cin>>poc;
insert(ar,n,ins,poc);
getch();
}

void insert(int arr[20],int x,int ins,int loc)
{
 int i;
 for(i=x;i>loc;i--)
  {
  arr[i]=arr[i-1];
  }
  arr[loc]=ins;
 cout<<"Array after inserting element is:-\n "<<endl;
 for(i=0;i<x+1;i++)
   {
    cout<<arr[i]<<endl;
   }
}
