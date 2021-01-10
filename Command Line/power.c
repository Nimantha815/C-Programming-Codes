#include<stdio.h>

int power(int x, int y){
	
	int i=0;
	if(y>=0){
		int multi = x;
		for(i=0; i<y-1; i++){
			x = x*multi;
		}
		printf("%d", x);
	}
	else{
		int multi = x;
		for(i=0; i<-y-1; i++){
			x = x*multi;
		}
		printf("1/%d", x);
	}
	
}

int main(int argc, char *argv[]){
	if(argc==1){
		printf("No command line arguments except file name.\n");
	}
	else{
		power(atoi(argv[1]), atoi(argv[2]));
//		printf("%d", n);
	}
	
	return 0;
}
