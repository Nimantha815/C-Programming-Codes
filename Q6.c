#include<stdio.h>
#include<string.h>
int main()
{
	char s[100],*ptr;
	int i=0;
	printf("Enter if you want to string: ");
	gets(s);
	ptr=s;
	while(ptr[i]!='\0')
	    i++;
	printf("You entered length= %d",i);
	
}
