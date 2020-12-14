#include<stdio.h>

struct Date{
	int day;
	int month;
	int year;
}d;

int main(){
    int flag =0;

    while(flag != 1){
        flag = 1;
        printf("Store the date = \n");
        printf("Enter year month day = ");
        scanf("%d %d %d", &d.year, &d.month, &d.day);

        if(d.month >12 || d.month<=0 ){
            printf("Invalide Month...\n");

            if(d.day >30 || d.day<=0 ){
            printf("Invalide Date...\n");

            flag =0;
            }

        }else{
            if(d.day >30 || d.day<=0 ){
            printf("Invalide Date...\n");
            flag =0;
            }
        }

    }

	d.day = d.day + 45;
	if(d.day>30 && d.day<60){
		d.day = d.day - 30;
		d.month = d.month + 1;
		if(d.month>12){
			d.month = d.month-12;
			d.year = d.year + 1;
		}
	}
	else if(d.day>60){
		d.day = d.day - 60;
		d.month = d.month + 2;
		if(d.month>12){
			d.month = d.month-12;
			d.year = d.year + 1;
		}
	}
	printf("\nAdd 45 days...\n");
	printf("\nUpdated date is %d %d %d", d.year, d.month, d.day);

	return 0;
}
