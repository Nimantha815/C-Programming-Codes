#include<stdio.h>

int main(){
	int a,b,c;
	printf("Enter Two Values: \n");
    scanf("%d %d",&a,&b);
    c=add(&a,&b);
    printf("Sum: %d",c);
    
}
add(int *x,int *y){
	int z;
	z=*x + *y;
	return(z);
}
