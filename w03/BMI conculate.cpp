#include<stdio.h>

int main(){
	float w,t,b;
	printf("�п�J�魫(����): ");
	scanf("%f",&w);
	printf("�п�J����(����): ");
	scanf("%f",&t);
	b=w/(t*t);
	while(b>=0){
	
	printf("BMI = %f\n",b);
	if(b<18.5){
		printf("�魫�L��\n"); 
	}else if(b>=18.5 && b<24){
		printf("�魫�A��\n");
	}else if(b>=24 && b<27){
		printf("�魫�L��\n"); 
	}else if(b>=27 && b<30){
		printf("���תέD\n");
	}else if(b>=30 && b<35){
		printf("���תέD\n");
	}else if(b>=35){
		printf("���תέD\n");
	}else {
		printf("�A��J�F�����`���Ʀr\n");
	} 
	printf("�п�J�魫(����): ");
	scanf("%f",&w);
	printf("�п�J����(����): ");
	scanf("%f",&t);
	b=w/(t*t);}
}
