#include<iostream.h>
#include<conio.h>

 void main()
  {
  int i,a[5],no,pos;
  clrscr();
  cout<<"Enter data in Array: ";
  for(i=0;i<5;i++)
  {
  cin>>a[i];
  }
  cout<<"\n\nStored Data in Array: ";
  for(i=0;i<5;i++)
  {
  cout<<a[i];
  }
  cout<<"\n\nEnter position to insert number: ";
  cin>>pos;
  if(pos>5)
  {
  cout<<"\n\nThis is out of range";
  }
  else
  {
  cout<<"\n\nEnter new number: ";
  cin>>no;
  --pos;
  for(i=5;i>=pos;i--)
  {
  a[i+1]=a[i];
  }
  a[pos]=no;
  cout<<"\n\nNew data in Array: ";
  for(i=0;i<6;i++)
  {
  cout<<a[i];
  }
  }
  getch();
  }
