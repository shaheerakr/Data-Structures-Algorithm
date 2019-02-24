#include<stdio.h>
int main(){
	int array[10];
	int i,num,keynum,found=0;
	printf("enter the values of num");
	scanf("%d",&num);
	printf("enter values one by one");
	for(i=0;i<num;i++)
		scanf("%d",&array[i]);
	printf("input array\n");
	for(i=0;i<num;i++)
		printf("%d\n",array[i]);
	printf("enter the element to be searched");
	scanf("%d",&keynum);
	for(i=0;i<num;i++)
		if(array[i]==keynum)
		{
			found=1;
			break;
		}
	if(found==1)
		printf("element found");
	else
		printf("element not found");
}
