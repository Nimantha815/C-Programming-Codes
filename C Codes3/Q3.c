#include<stdio.h>

int main(){
	double arr[5][3]={34.5,56.7,12.6,98.4,54.21,89.55,54.2,98.4,73.2,21.45,34.5,98.4,21.45,98.4,9.3};
	int i,j,k;
	double sum=0;
	for(i=0;i<=4;i++){
		for(j=0;j<=2;j++){
			sum=sum+arr[i][j];
		
		}
		
	}
	printf("%.2f\n",sum);
	printf("%.2f\n",sum/15);
	double swap;
	for(k=0; k< 5; k++) {
   	for (i = 0; i < 3; i++) {
     for (j = i +1; j < 3; ++j) {
       if (arr[k][i] > arr[k][j])  {
          swap = arr[k][i];
           arr[k][i] = arr[k][j];
           arr[k][j] = swap;
           
       }
     }
   }
}
printf("%.2f\n",swap);
}
