#include<stdio.h>


struct student{
	int ID;
	char name[100];
	int age;
	char address[200];
};


int i;
int main(){
	struct student s[5];
	
	printf("Enter Information of 15 students.\n");
	for(i=0;i<15;++i){
		printf("Enter %d student details:\n",i+1);
		printf("Enter Student Id Number:\n");
		scanf("%d",&s[i].ID);
		printf("Enter Name:\n");
		scanf("%s",&s[i].name);
		printf("Enter Age:\n");
		scanf("%d",&s[i].age);
		
		printf("Enter Address:\n");
		scanf("%s",&s[i].address);
		
		
	}
	printf("Age 14 students\n");
	age14(s,i);
	printf("Even Id students\n");
	even(s,i);
	
}
void age14(struct student *x,int n){
	for(i=0;i<n;i++)
	{
		if(x->age == 14)
		{
			printf("%s\n",x->name);
		}
		x=x+1;
	}
}
void even(struct student *x,int n){
	for(i=0;i<n;i++){
		if(x->ID%2 == 0)
		{
			printf("%s\n",x->name);
		}
		x=x+1;
	}
}
void display(struct student *a,int n)
{
	int x;
	printf("Enter the id: ");
	scanf("%d",&x);
	for(i=0;i<n;i++)
	{
		if(a->ID == x)
		{
			printf("%s\n%d\n%s",a->name,a->age,a->address);  
		}
	}
}

