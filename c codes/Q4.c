#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct{
    int a,e,i,o,u,other;
}word;

int main()
{
    word W;
    char array[100];
    FILE * fp;
    int i=0;

    fp = fopen("myword.txt","a");
    printf("Enter your word: ");
    gets(array);
    fprintf(fp,array);

    W.a = 0,W.e = 0,W.i = 0,W.o = 0,W.u = 0,W.other = 0;

    while(strlen(array)>i){

        if(array[i]=='a'||array[i]=='A'){
            W.a=W.a + 1;
        }

        if(array[i]=='e'||array[i]=='E'){
            W.e=W.e+1;
        }

        if(array[i]=='i'||array[i]=='I'){
            W.i=W.i+1;
        }

        if(array[i]=='o'||array[i]=='O'){
            W.o=W.o+1;
        }

        if(array[i]=='u'||array[i]=='U'){
            W.u=W.u+1;
        }

        if(array[i] !='a' && array[i] != 'e' && array[i] != 'i' && array[i] != 'o'&& array[i] != 'u' && array[i] != 'A' && array[i] != 'E' && array[i] != 'I' && array[i] != 'O' && array[i] != 'U' ){
            W.other=W.other+1;
        }
	i++;
    }
    fprintf(fp,"\t\t%d\t%d\t%d\t%d\t%d\t%d\t%d",W.a,W.e,W.i,W.o,W.u,W.other,strlen(array));
    fclose(fp);

    fp=fopen("myword.txt","a");
    fprintf(fp,"\n");
    fclose(fp);
}
