#include<stdio.h>

int main(int argc, char *argv[]){
	int i, j;
	//char choice;
	char character[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
	
	if(argc==1){
		printf("No commandline arguments without file name.\n");
	}
	else{
		for(i=1; i<argc; i++){
			//choice = atoi(argv[i]);
			for(j=0; j<10; j++){
				
				if(*argv[i]==character[j]){
					printf("%d", j);
				}
			}
		}
	}
	
	return 0;
}
