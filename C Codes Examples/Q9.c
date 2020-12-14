#include<stdio.h>
struct employee{
	char name[30];
	int hrsOfWork;
	int salary;

};

int main(){
struct employee e[]={
{"Sunil",8,10000},
{"Nimal",12,20000},
{"Bimal",10,12000},
{"Supun",12,25000},
{"Ishan",8,30000},
{"Reshmika",10,40000},
{"Malaka",12,30000},
{"Uvindu",8,10000},
{"Sajith",10,25000},
{"Bandara",8,20000}
};

	int i, j, k;
	printf("Store the data of employees\n");
	printf("---------------------------\n");
	
	for(j=0; j<10; j++){
		if(e[j].hrsOfWork==8){
			e[j].salary = e[j].salary + 500*30;
		}
		else if(e[j].hrsOfWork==10){
			e[j].salary = e[j].salary + 1000*30;
		}
		else if(e[j].hrsOfWork==12){
			e[j].salary = e[j].salary + 1500*30;
		}
	}
	printf("\nSalaries after the updated..\n");
	printf("------------------------------\n");
	for(k=0; k<10; k++){
		printf("%s's salary is %d\n", e[k].name, e[k].salary);
	}
	
	return 0;
}
