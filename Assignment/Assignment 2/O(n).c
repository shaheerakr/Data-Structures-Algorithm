#include<stdio.h>

void main(void)
{
	int k,l,min,v[100];
	printf("How many value do you want?");
	scanf("%d",&l);
	printf("enter the value");
	for(k=0;k<l;k++)
	{
		scanf("%d",&v[k]);
	}
	min=v[0];
	for(k=1;k<l;k++)
	{
		if(v[k]<min)
			min=v[k];
	}
	printf("minimum value is %d",min);
}

