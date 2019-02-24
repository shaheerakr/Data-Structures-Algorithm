#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

int main()
{
	int arr[55];
	int n,n1,i,flag=0;
	printf("Enter Array Number:");
	scanf("%d",&n);

	printf("Enter Array Elements:");
	for(i=0;i<n;i++)
	{
	scanf("%d",&arr[i]);
	}
	
	printf("Enter the Elements to search:");
	scanf("%d",&n1);
	for(i=0;i<n;i++)
	{
		if(arr[i]==n1)
	{
		flag=1;
	printf("\n %d is Found at Position %d",n1,i+1);
	break;	
	}
}
	if(flag==0)
	printf("\n %d Not Found in the array", n1);
	}


