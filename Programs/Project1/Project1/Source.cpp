#include<iostream>
#include<stdio.h>
#include<string>

using namespace std;

int main()
{
	static int list[100];
	int i,j,tmp,mid;
	for (i = 0; i < 100; i++)
		list[i] = rand();
	for(i=0;i<100;i++)
		for (j = i + 1; j < 100; j++)
			if (list[i] > list[j])
			{
				tmp = list[i];
				list[i] = list[j];
				list[j] = tmp;
			}
	for (i = 0; i < 100; i++)
		cout << i << ". " << list[i] << endl;
	cout << "enter the number you want to search";
	cin >> tmp;
	i = 0; j = 100;
	mid = (i + j) / 2;
	while (i<j)
	{
		if (list[mid] == tmp)
			break;
		if (list[mid] < tmp)
		{
			i = mid+1;
		}
		else
		{
			j = mid-1;
		}
		mid = (i + j) / 2;
	}
	if (list[mid] == tmp)
	{
		cout << tmp << " was found at " << mid << endl;
	}
	else
	{
		cout << tmp << " was not found" << endl;
	}
	system("pause");

}