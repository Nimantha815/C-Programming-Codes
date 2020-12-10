#include<stdio.h>
#include<string.h>
int main()
{
	char str[50];
	int vowels=0,consonants=0;
	printf("Enter if you want to string: ");
	gets(str);
	char *s=str;
	while(*s!='\0')
	{
		if(*s=='a'| *s=='e'| *s=='i'| *s=='o'|*s=='u'| *s=='A' | *s=='E' | *s=='I' | *s=='O'|*s=='U')
		{
			vowels++;
		}
		else{
			consonants++;
		}
		s++;
	
		
    }
	printf("Vowels string count=%d\n",vowels);
	printf("Consonantsstring count=%d",consonants);
	
}
