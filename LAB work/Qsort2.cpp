#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int partition(int A[10], int p, int r)
{
	int tmp,i,x;
	x=A[r];
	i=p-1;
	for(j=p;j<=r;j++)
	{
		if(A[j]<x)
	{
		i++;
		tmp=A[i];
		A[i]=A[j];
		A[j]=tmp;
		}
	}

		i++;
		tmp=A[i];
		A[i]=A[r];
		A[r]=tmp;
	return i;
}
void qsort (int A[10], int p, int r)
{
	int q;
	if(p<r)
	{
	q=partition(A,p,r);
	qsort(A,p,q-1);
		qsort(A,q-1,r);
	}
}
