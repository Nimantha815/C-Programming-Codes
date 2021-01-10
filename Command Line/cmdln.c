#include<stdio.h>

int main(int argc, char *argv[]){
	int i;
	if(argc==1){
		printf("No arguments except filename");
	}
	
	else{
//		printf("%d", argc);
//		for(i=0; i<argc; i++){
//			printf("%s\t", argv[i]);
//		}

		char *arr = argv[1];
//		printf("%c", arr[1]);
		while(arr[i]!='\0'){
			//printf("%c", arr[i]);
			i++;
		}
//		int size = 0;
//		size = *(&arr + 1) - arr;
//		while(arr[i]!='\0'){
//			printf("%c", arr[i]);
//			i++;
//		}
		
	//	printf("%d", size);
		printf("%d", i);	
	}
	
	return 0;
}
