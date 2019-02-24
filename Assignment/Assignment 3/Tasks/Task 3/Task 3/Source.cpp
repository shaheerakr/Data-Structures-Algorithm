#include<iostream>
#include<string>

using namespace std;

bool anagram(string, string);

int main()
{
	string str1, str2;
	cout << "enter two string to check anagram" << endl;
	cin >> str1 >> str2;
	bool check = anagram(str1, str2);
	if (check == true)
		cout << "this is an anagram" << endl;
	else
		cout << "this is not an anagram" << endl;
	system("pause");
}
bool anagram(string str1, string str2)
{
	static int alph1[26], alph2[26];
	int size1 = str1.length(), size2 = str2.length(), i;
	if (size1 == size2)
	{
		for (i = 0; i < size1; i++)
		{
			switch (str1[i])
			{
			case 'a':
				alph1[0]++;
				break;
			case 'b':
				alph1[1]++;
				break;
			case 'c':
				alph1[2]++;
				break;
			case 'd':
				alph1[3]++;
				break;
			case 'e':
				alph1[4]++;
				break;
			case 'f':
				alph1[5]++;
				break;
			case 'g':
				alph1[6]++;
				break;
			case 'h':
				alph1[7]++;
				break;
			case 'i':
				alph1[8]++;
				break;
			case 'j':
				alph1[9]++;
				break;
			case 'k':
				alph1[10]++;
				break;
			case 'l':
				alph1[11]++;
				break;
			case 'm':
				alph1[12]++;
				break;
			case 'n':
				alph1[13]++;
				break;
			case 'o':
				alph1[14]++;
				break;
			case 'p':
				alph1[15]++;
				break;
			case 'q':
				alph1[16]++;
				break;
			case 'r':
				alph1[17]++;
				break;
			case 's':
				alph1[18]++;
				break;
			case 't':
				alph1[19]++;
				break;
			case 'u':
				alph1[20]++;
				break;
			case 'v':
				alph1[21]++;
				break;
			case 'w':
				alph1[22]++;
				break;
			case 'x':
				alph1[23]++;
				break;
			case 'y':
				alph1[24]++;
				break;
			case 'z':
				alph1[25]++;
				break;
			}
			switch (str2[i])
			{
			case 'a':
				alph2[0]++;
				break;
			case 'b':
				alph2[1]++;
				break;
			case 'c':
				alph2[2]++;
				break;
			case 'd':
				alph2[3]++;
				break;
			case 'e':
				alph2[4]++;
				break;
			case 'f':
				alph2[5]++;
				break;
			case 'g':
				alph2[6]++;
				break;
			case 'h':
				alph2[7]++;
				break;
			case 'i':
				alph2[8]++;
				break;
			case 'j':
				alph2[9]++;
				break;
			case 'k':
				alph2[10]++;
				break;
			case 'l':
				alph2[11]++;
				break;
			case 'm':
				alph2[12]++;
				break;
			case 'n':
				alph2[13]++;
				break;
			case 'o':
				alph2[14]++;
				break;
			case 'p':
				alph2[15]++;
				break;
			case 'q':
				alph2[16]++;
				break;
			case 'r':
				alph2[17]++;
				break;
			case 's':
				alph2[18]++;
				break;
			case 't':
				alph2[19]++;
				break;
			case 'u':
				alph2[20]++;
				break;
			case 'v':
				alph2[21]++;
				break;
			case 'w':
				alph2[22]++;
				break;
			case 'x':
				alph2[23]++;
				break;
			case 'y':
				alph2[24]++;
				break;
			case 'z':
				alph2[25]++;
				break;
			}
		}
		for (i = 0; i < 26; i++)
		{
			if (alph1[i] == alph2[i])
				continue;
			else
				return false;
		}
		return true;
	}
	else
		return false;
}