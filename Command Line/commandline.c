#include<stdio.h>

int sum(int x, int y){
	return x+y;
}

int main(int argc, char *argv[]){
	int i;
//	printf("%d\n", argc);
	
	if(argc == 1){
		printf("No command line arguments except file name.\n");
	}
	else{
		for(i=0; i<argc; i++){
			printf("argument[%d] : %s\n", i, argv[i]);
			int summ = sum(*argv[1],*argv[2]);
			//printf("Sum of 1st and 2nd argument = %d", summ);
		}	
	}
	
	return 0;
}
