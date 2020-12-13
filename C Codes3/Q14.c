#include<stdio.h>
#include<string.h>


void search(char* pat,char* txt){
	
	int m= strlen(pat);
	int n= strlen(txt);
	int i;
	
	for(i=0;i<=n-m;i++){
		int j;
		
		for(j=0;j<m;j++)
			if(txt[i+j]!=pat[j])
			break;
		
		
		if(j==m)
			printf("pattern %s found at index %d \n",pat,i);
		
	}
}

int main(){
	char txt[]="Cut your coat according to the cloth";
	char pat[]="cord";
	search(pat, txt);
	return 0;
}
