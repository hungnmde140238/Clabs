#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
	char str[100];
	int i,key;
	do
	{
		printf("input a string: ");
		gets(str);
		
		for(i=strlen(str);i>=0;i--)
		{
			if (str[i]==' ')
			{
				str[i]='\0';
				printf("%s ",&str[i]+1);
			}
		}
		printf("%s",str);
		key=getch();
		}	
		while (key!=27);
}

