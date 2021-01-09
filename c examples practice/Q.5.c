#include<stdio.h>
int main(){
	int data[10]={11,56,22,45,68,43,45,56,68,22};
	int newData[10];
	int x=0;
	int i=0;
	while(x<10){
		int y=0;
		int r=0;
		while(y<10){
			if(data[x]==newData[y]){
				r=1;
				break;
			}
			y++;
		}
		if(r==0){
			newData[i]=data[x];
			i++;
		}
		x++;
	}
	int n;
	for(n=0;n<i;n++){
		printf("%d ",newData[n]);
	}
	return 0;
}
