#include<stdio.h>

int main(int argc, char *argv[]){
	
	if(argc==1){
		printf("No commandline arguments without file name.\n");
	}
	else{
		FILE *fp;
		fp = fopen(argv[1], "r");
		char array[120];
		char array2[120];
		int i=0, j=0;
		
		while(!feof(fp)){
			fgets(array, 200, fp);
			i++;
		}
		while(!feof(fp)){
			fscanf(fp, "%c", array2[j]);
			j++;
		}
		printf("Lines = %d\n", i);
		printf("W = %d\n", j);
	}
	
	return 0;
}
