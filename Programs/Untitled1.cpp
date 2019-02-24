#include <iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;
int main(){
    int d, a, b, k=0;
    char temp[10], text[20], pattern[20];
do{
        cout<<"Enter your name:";
        cin.getline(text,20);
        cout<<"Enter another pattern to match:";
        cin.getline(pattern,20);
        a=strlen(text);
        b=strlen(pattern);
        if(a>b)
        {
            for(int i=0;i<=b;i++)
                for(int j=0;j<=a;j++)
            {
                if(pattern[i]=='\0')
                    break;
                if(pattern[i]==text[j])
                {
                    cout<<pattern[i];
                    k++;
                    break;
                }
            }
            if(k==0)
                cout<<"not found";
        }
        else
        {
            cout<<"Try again pattern length is greater then text length "<<endl;
         }
    }
    while(b>a);
    cout<<endl<<endl;
    system("pause");
}

