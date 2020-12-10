#include<stdio.h>
#include<string.h>
int main()
{
	char str[20];
	printf("Enter if you want to string= ");
	scanf("%s",str);
	int len=strlen(str);
	int i=0;
	char *s;
	s=str;
	printf("Entered my string is= ");
	for(i=0;i<len;i++)
	{
		printf("%c",*(s+i));
	}
	printf("\nReverse my string is= ");
	for(i=len-1;i>=0;i--)
	{
		printf("%c",*(s+i));
	}
	
}
