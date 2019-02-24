#include<stdio.h>

void main(void)
{
	int k,n,l,min;
	int v[100];
	printf("enter the number of values you want?");
	scanf("%d",&n);
	printf("enter the values");
	for(k=0;k<n;k++)
	{
		scanf("%d",&v[k]);
	}
	min=v[0];
	for(k=0;k<n;k++)
		for(l=k+1;l<n;l++)
			if(v[k]<v[l])
				if(v[k]<min)
					min=v[k];
	printf("the minimum value is %d",min);
}

