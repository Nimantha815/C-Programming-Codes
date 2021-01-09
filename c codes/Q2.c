#include<stdio.h>
#include<stdlib.h>

typedef struct {
    char Name[20];
    int EmpNo;
    float salary;
    float OT;
}Emp;

int main(){
	Emp e[4];
    char array[1000];
    FILE *fp;
    int i;
    float amount[4];

    float total=0;
    fp=fopen("data.txt","r");

    while(!feof(fp)){

        fgets(array,500,fp);
        if(array[i]!='\n'){
            fscanf(fp,"%s\t\t%d\t\t%f\t\t%f",&e[i].Name,&e[i].EmpNo,&e[i].salary,&e[i].OT);
        }
        i++;
    }

    fclose(fp);
     printf("Employee No\tBasic salary\tOT Hours\tNet salary \n");
    for(i=0;(sizeof(e)/sizeof(e[0]))>i;i++){
        amount[i]=e[i].salary+e[i].salary*0.35+e[i].OT*15;
        printf("%d\t\t%.2f\t%.2f\t\t%.2f\n",e[i].EmpNo,e[i].salary,e[i].OT,amount[i]);
    }


    for(i=0;(sizeof(amount)/sizeof(amount[0]))>i;i++){
        total=total+amount[i];
    }

    printf("\nTotal Amount:%.2f",total);

}
