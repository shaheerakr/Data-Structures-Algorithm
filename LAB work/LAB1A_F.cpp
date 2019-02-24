# include <stdio.h>
# include <conio.h>
# define N 6

int main()
{
char txt[N]={"abcd"};
int j,r=2;
char c='x';

printf("\nText before insertion  %s\t",txt);
printf("\nCharacter to be inserted  %c\t",c);

for(j=N;j>=r;j--)
 {
      txt[j+1]=txt[j];
 }
 j=j+1;

 txt[j]=c;
 printf("\nText after insertion %s\t",txt);


}
