#include<stdio.h>
int main(){
	int year;
		printf("Plear enter years: ");
		scanf("%d",&year);
	while(year>=0){
		if(((year%4==0) &&! (year%100==0)) || (year%400==0)){
		printf("Year %.d is a leap year\n",year);
	}
	else{
		printf("not leap year\n");}
		printf("Plear enter years: ");
		scanf("%d",&year);}
	}
