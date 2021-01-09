#include<stdio.h>
#include<stdlib.h>

typedef struct{
	int id_number;
	int anu_income;
	int numOfMembers;
	int t;
}F;
F fam[5];
int IncomeSum=0;
int Members=0;

int sumOfIncome(int income){
	IncomeSum=IncomeSum+income;
	}

int totalOfMembers(int mem,int i){
	Members=Members+mem;
	fam[i].t=Members;

	}

int main(){

	FILE *fp;
	fp=fopen("readme.txt","r");
	int i=0,medianIncome;

	while(i<5){
		fscanf(fp,"%d\t\t%d\t\t\t%d",&fam[i].id_number,&fam[i].anu_income,&fam[i].numOfMembers);
		sumOfIncome(fam[i].anu_income);
		totalOfMembers(fam[i].numOfMembers,i);
		i++;
	}

	printf("IDNumber\tAnnualIncome($)\tNumberOfMembers\n\n");
	for(i=0;i<5;i++){
		printf("%d\t\t%d\t\t%d\n",fam[i].id_number,fam[i].anu_income,fam[i].numOfMembers);
	}

	int avrgeIncm=IncomeSum/5;
	printf("\nAverage household income($):%d\n",avrgeIncm);
	printf("\nTotal number of members in the town:%d\n",Members);
	
	int medianPoint=Members/2;

	for(i=0;i<5;i++){
		if(medianPoint-fam[i].t<0){
			medianIncome=fam[i].anu_income;
			break;
		}
	}

	printf("\nMedian Annual Income($):%d",medianIncome);

	return 0;
}
