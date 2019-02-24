
# include <stdio.h>
# include <conio.h>
# include <string.h>

int main()
{

char txt[6]={"marium"};
int j,k=2,n=6;

printf("\nText before deletion  %s\t",txt);


//for(j=k;j<n;j++)
//txt[j]=txt[j+1];
j=k-1;
while(j>=k)
     {txt[j]=txt[k+1];
     j++;}


printf("\nText after deletion  %s\t",txt);

return 0;
}
