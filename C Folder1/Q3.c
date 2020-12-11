#include<stdio.h>

int surface(int);
int volume(int);
int main(){
	int l;
	printf("Enter the value for length:\n");
	scanf("%d",&l);
	surface(l);
	volume(l);
}
int surface(int l){
	int suf;
	suf=6*l*l;
	printf("Surface: %d\n",suf);
}
int volume(int l){
	int vol;
	vol=l*l*l;
	printf("Volume: %d\n",vol);
}
