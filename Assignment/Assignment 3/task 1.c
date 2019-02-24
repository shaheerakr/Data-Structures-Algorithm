#include<stdio.h>
#include<string.h>
#include<stdbool.h>

bool anagram(char*,char*);

int main()
{
	char str1[100],str2[100];
	puts("enter two string to check anagram");
	gets(str1);
	gets(str2);
	bool check=anagram(str1,str2);
	if(check==true)
		printf("it is an anagram");
	else
		printf("it is not an anagram"); 
		
}

bool anagram(char*str1,char*str2)
{
	int size1=strlen(str1), size2=strlen(str2),i,j;
	for(i=0;i<size1;i++)
		for(j=0;j<size2;j++)
			if(str1[i]==str2[j])	
				return true;
	return false;
}
