#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<string.h>
int main()
{
	char a[100],i;
	printf("enter a string:");
	scanf("%s",&a);
	int len=strlen(a);
	for(i=0;i<len;i++)
	{
		if(isalpha(a[i]))
		{
			printf("\n%c is identifier.\n",a[i]);
		}
		else if(isdigit(a[i]))
		{
			printf("%c is digit.\n",a[i]);
		}
		else if(a[i]=='*' || a[i]=='-' || a[i]=='+' || a[i]=='=' || a[i]=='/' || a[i]=='%' || a[i]=='!'|| a[i]=='(' || a[i]==')' ||
		a[i]=='{' || a[i]=='}' || a[i]=='[' || a[i]==']')
		{
			printf("%c is operator\n",a[i]);
		}
		
	}
	return 0;
}
