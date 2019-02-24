#include<iostream>
#include<string>

using namespace std;

bool anagram(char*, char*);

int main()
{
	char str1[100], str2[100];
	cout << "enter two string to check anagram" << endl;
	cin >> str1 >> str2;
	bool check = anagram(str1, str2);
	if (check == true)
		cout << "this is an anagram" << endl;
	else
		cout << "this is not an anagram" << endl;
	system("pause");
}
bool anagram(char*str1, char*str2)
{
	char sw;
	int size1 = strlen(str1), size2 = strlen(str2), i, j;
	if (size1 == size2)
	{
		for (i = 0; i <= size1; i++)
		{
			for (j = i + 1; j <= size1; j++)
			{
				if (str1[i] < str1[j])
				{
					sw = str1[j];
					str1[j] = str1[i];
					str1[i] = sw;
				}
				if (str2[i] < str2[j])
				{
					sw = str2[j];
					str2[j] = str2[i];
					str2[i] = sw;
				}
			}
		}
		if (strcmp(str1, str2) == 0)
			return true;
		else
			return false;
	}
	else
		return false;
}