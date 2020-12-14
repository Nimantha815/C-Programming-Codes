#include<stdio.h>


struct student{
	char ID[10];
	char name[100];
	int age;
	char address[200];
	float mark;
}s[5];

int main(){
	int i;
	printf("Enter Information of 5 students.\n");
	for(i=0;i<5;++i){
		printf("Enter %d student details:\n",i+1);
		printf("Enter Student Id Number:\n");
		scanf("%s",&s[i].ID);
		printf("Enter Name:\n");
		scanf("%s",&s[i].name);
		printf("Enter Age:\n");
		scanf("%d",&s[i].age);
		printf("Enter Address:\n");
		scanf("%s",&s[i].address);
		printf("Enter Mark:\n");
		scanf("%f",&s[i].mark);
	}
	printf("Display Information of 5 students.\n");
	for(i=0;i<5;i++){
		printf("Enter %d student details:\n",i+1);
		printf("Display  Student Id Number: %s\n",s[i].ID);
		printf("Display Name:%s",s[i].name);
		printf("Display age:%d\n",s[i].age);
		printf("Display Address:%s\n",s[i].address);
		printf("Display mark:%f\n",s[i].mark);
		
	}
}
