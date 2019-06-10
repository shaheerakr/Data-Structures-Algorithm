#include<stdio.h>
#define names 10

void main(void)
{
	const char array[names][25] =
	{
	"Shaheer Akram",
	"Yasir khatri",
	"Javeria Nadeem",
	"Qandeel Asif",
	"Shaheer Imam",
	"Asad Ali",
	"Abdul Qadir"
	};
	const char *ptr = &array[0][0];
	int i = 0;
	for (i = 0; i<names;i++)
		printf("%s\n",(ptr+25*(i)));
	
}
