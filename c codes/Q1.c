#include<stdio.h>
#include<stdlib.h>

typedef struct{
	char StRe_no[20];
	char St_Name[50];
	int St_age;
}student;

void main(){
	student s[5];
	int i;
	for(i=1;i<=5;i++){
		printf("Enter Student Reg_NO:\n");
		scanf("%s",&s[i].StRe_no);
		printf("Enter Name:\n");
		scanf("%s",&s[i].St_Name);
		printf("Enter Age:\n");
		scanf("%d",&s[i].St_age);
	}
	char heading[200]= "StRe_no		St_Name		St_age";
	printf("%s", heading);
	printf("\n");
	for(i=1;i<=5;i++){
		printf("%s	%s		%d\n", s[i].StRe_no,s[i].St_Name,s[i].St_age);   
	}
}


