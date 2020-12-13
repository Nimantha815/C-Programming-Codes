#include<stdio.h>
#include<string.h>

int main(){
	
	char word[10];
	printf("Enter the word:\n");
	scanf("%s",&word);
	int n=strlen(word);
	printf("%d\n",n);
	//char str = word;
	//printf("%s",&str);
	char w[3]={word[n-3],word[n-2],word[n-1]};
	printf("%s",w);
	char str[3] = {'i','n','g'};
	//printf("%s",str);
	if(w==str){
		char ly[10]={word[10],'l','y'};
		printf("%s",ly);
	}
	else{
		char ing[10]={word[10],'i','n','g'};
		printf("%s",ing);
	}
}
