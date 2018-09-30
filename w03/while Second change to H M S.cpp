#include<stdio.h>
int main(){
	int S;
	int hh,mm,ss;
	printf("please Enter Second: ");
	scanf("%d",&S);
	while(S >= 0){
	hh=S/3600;
	mm=S%3600/60;
	ss=S%60;
	printf("%d sec=%02d:%02d%:%02d\n",S,hh,mm,ss);
	printf("please Enter Second: ");
	scanf("%d",&S);
}}
