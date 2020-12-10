#include <stdio.h>
int main()
{
    char alph[27];
    int i;
    char *ptr;
 	printf("\n\n Pointer : Print all the alphabets:\n"); 
    ptr = alph;     

    for(i=0;i<26;i++)
    {
        *ptr=i+'A';
        ptr++;
    }
    ptr = alph;

printf(" The Alphabets are : \n");
    for(i=0;i<26;i++)
    {
       printf(" %c ", *ptr);
        ptr++;
    }
   
   
}
