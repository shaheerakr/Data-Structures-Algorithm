#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
	static int arr[100],tmp[100];
	int i,num,k,j;
	for (i = 0; i < 100; i++)
		arr[i] = rand();
	for (i = 0; i < 100; i++)
		cout << i << ". " << arr[i] << endl;
	cout << "enter the number you want to add in the list" << endl;
	cin >> num;
	cout << "enter the position in the array you want to add the number" << endl;
	cin >> k;
	j = 0;
	for (i = k; i < 100; i++)
	{
		tmp[j++] = arr[i];
	}
	j = 0;
	for (i = k; i < 100; i++)
	{
		arr[i + 1] = tmp[j++];
	}
	arr[k] = num;
	for (i = 0; i < 100; i++)
		cout << i << ". " << arr[i] << endl;
	system("pause");

}