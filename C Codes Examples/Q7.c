#include<stdio.h>

struct date{
	int day;
	int month;
	int year;
}d[2];

int main(){
	int i;
	for(i=0;i<2;i++){
	
	printf("Date %d :\n",i+1);
	printf("Enter Day:");
	scanf("%d",&d[i].day);
	printf("Enter Month:\n");
	scanf("%d",&d[i].month);
	printf("Enter Year:\n");
	scanf("%d",&d[i].year);
	}
	if(d[0].day==d[1].day && d[0].month==d[1].month && d[0].year==d[1].year)
	{
		printf("Dates are equal\n");
	}
	else
	{
		printf("Dates are not equal");
	}
	
	return 0;
}
