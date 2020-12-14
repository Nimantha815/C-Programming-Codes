#include<stdio.h>

struct customer{
	char name[200];
	char acc_num[20];
	int bal;
}cu[15];

void twoh(struct customer cu[],int x);
void bala(struct customer cu[],int x);


int main(){
	int i;
	for(i=0;i<15;i++){
		printf("Enter Name:\n");
		scanf("%s",&cu[i].name);
		printf("Enter Account Number:\n");
		scanf("%s",&cu[i].acc_num);
		
		printf("Enter Balance:\n");
		scanf("%d",&cu[i].bal);
		
	}
	twoh(cu,i);
	bala(cu,i);
}

void twoh(struct customer cu[],int n){
	int i;
	
	for(i=0;i<n;i++)
	{
		if(cu[i].bal<200)
		    printf("\n\n---The customers having balance less than Rs.200---\n\n");
		    printf("%s\n",cu[i].name);
	}
}
void bala(struct customer cu[],int n)
{
	int i;
	
	for(i=0;i<n;i++)
	{
		if(cu[i].bal>1000)
		{
		       printf("\n---Incremented balance for customers who had balance more than Rs.1000---\n\n");
		       printf("Name : %s ,Incremented balance : %d\n",cu[i].name,cu[i].bal+100);
		       
		}
	}
}
