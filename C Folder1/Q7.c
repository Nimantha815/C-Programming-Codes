#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

int main(){
	char NIC[10];
	printf("Enter your NIC Number:\n");
	scanf("%s",&NIC);
	
	char YEAR[4]={'1','9',NIC[0],NIC[1]};
	char DAY[3]={NIC[2],NIC[3],NIC[4]};
	int m,n;
	n=atoi(DAY + 0);
	m=n;
	
	//printf("%d",m);
	if(m<500){
	
	if(0<m && m<=31){
		int m12;
		m12=m-0;
		printf("You Are Male.\n");
		printf("Your Birthday is %s January %d.\n",YEAR,m12);
	}
	else if(31<m && m<=60){
		int m1=m-31;
		printf("You Are Male.");
		printf("Your Birthday is %s February %d.\n",YEAR,m1);
	}
	else if(60<m && m<=91){
		int m2=m-60;
		printf("You Are Male.\n");
		printf("Your Birthday is %s March %d.\n",YEAR,m2);
	}
	else if(91<m && m<=121){
		int m3=m-91;
		printf("You Are Male.\n");
		printf("Your Birthday is %s April %d.\n",YEAR,m3);
	}
	else if(121<m && m<=152){
		int m4=m-121;
		printf("You Are Male.\n");
		printf("Your Birthday is %s May %d.\n",YEAR,m4);
	}
	else if(152<m && m<=182){
		int m5=m-152;
		printf("You Are Male.\n");
		printf("Your Birthday is %s June %d.\n",YEAR,m5);
	}
	else if(182<m && m<=213){
		int m6=m-182;
		printf("You Are Male.\n");
		printf("Your Birthday is %s July %d.\n",YEAR,m6);
	}
	else if(213<m && m<=244){
		int m7=m-213;
		printf("You Are Male.\n");
		printf("Your Birthday is %s August %d.\n",YEAR,m7);
	}
	else if(244<m && m<=274){
		int m8=m-244;
		printf("You Are Male.\n");
		printf("Your Birthday is %s September %d.\n",YEAR,m8);
	}
	else if(274<m && m<=305){
		int m9=m-274;
		printf("You Are Male.\n");
		printf("Your Birthday is %s October %d.\n",YEAR,m9);
	}
	else if(305<m && m<=335){
		int m10=m-305;
		printf("You Are Male.\n");
		printf("Your Birthday is %s November %d.\n",YEAR,m10);
	}
	else if(335<m && m<=366){
		int m11=m-335;
		printf("You Are Male.\n");
		printf("Your Birthday is %s December %d.\n",YEAR,m11);
	}
	else{
		printf("Invalid NIC Number.\n");
	}
}
else{
	if(500<m && m<=531){
		printf("You Are Female.\n");
		printf("Your Birthday is %s January %d.\n",YEAR,m);
	}
	else if(531<m && m<=560){
		int m1=m-531;
		printf("You Are Female.");
		printf("Your Birthday is %s February %d.\n",YEAR,m1);
	}
	else if(560<m && m<=591){
		int m2=m-560;
		printf("You Are Female.\n");
		printf("Your Birthday is %s March %d.\n",YEAR,m2);
	}
	else if(591<m && m<=621){
		int m3=m-591;
		printf("You Are Female.\n");
		printf("Your Birthday is %s April %d.\n",YEAR,m3);
	}
	else if(621<m && m<=652){
		int m4=m-621;
		printf("You Are Female.\n");
		printf("Your Birthday is %s May %d.\n",YEAR,m4);
	}
	else if(652<m && m<=682){
		int m5=m-652;
		printf("You Are Female.\n");
		printf("Your Birthday is %s June %d.\n",YEAR,m5);
	}
	else if(682<m && m<=713){
		int m6=m-682;
		printf("You Are Female.\n");
		printf("Your Birthday is %s July %d.\n",YEAR,m6);
	}
	else if(713<m && m<=744){
		int m7=m-713;
		printf("You Are Female.\n");
		printf("Your Birthday is %s August %d.\n",YEAR,m7);
	}
	else if(744<m && m<=774){
		int m8=m-744;
		printf("You Are Female.\n");
		printf("Your Birthday is %s September %d.\n",YEAR,m8);
	}
	else if(774<m && m<=805){
		int m9=m-774;
		printf("You Are Female.\n");
		printf("Your Birthday is %s October %d.\n",YEAR,m9);
	}
	else if(805<m && m<=835){
		int m10=m-805;
		printf("You Are Female.\n");
		printf("Your Birthday is %s November %d.\n",YEAR,m10);
	}
	else if(835<m && m<=866){
		int m11=m-835;
		printf("You Are Female.\n");
		printf("Your Birthday is %s December %d.\n",YEAR,m11);
	}
	else{
		printf("Invalid NIC Number.\n");
	}
}
}
