#include<stdio.h>

struct Marks{
	char ID[10];
	char name[100];
	float chem_marks,maths_marks,phy_marks,average;
}s[5];

int main(){
	printf("5 student details:\n");
	int i;
	for(i=0;i<5;i++){
		printf("Enter %d student details:\n",i+1);
		printf("Enter Student Id Number:\n");
		scanf("%s",&s[i].ID);
		printf("Enter Name:\n");
		scanf("%s",&s[i].name);
		printf("Enter Chemistry Mark:\n");
		scanf("%f",&s[i].chem_marks);
		printf("Enter Maths Mark:\n");
		scanf("%f",&s[i].maths_marks);
		printf("Enter Physics Mark:\n");
		scanf("%f",&s[i].phy_marks);
		
		s[i].average=(s[i].chem_marks+s[i].maths_marks+s[i].phy_marks)/3.0;
		printf("Average of %d student = %.1f\n",i+1,s[i].average);
	}
}
