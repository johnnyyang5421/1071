#include<stdio.h>

int main(){
	float w,t,b;
	printf("請輸入體重(公斤): ");
	scanf("%f",&w);
	printf("請輸入身高(公尺): ");
	scanf("%f",&t);
	b=w/(t*t);
	while(b>=0){
	
	printf("BMI = %f\n",b);
	if(b<18.5){
		printf("體重過輕\n"); 
	}else if(b>=18.5 && b<24){
		printf("體重適中\n");
	}else if(b>=24 && b<27){
		printf("體重過重\n"); 
	}else if(b>=27 && b<30){
		printf("輕度肥胖\n");
	}else if(b>=30 && b<35){
		printf("中度肥胖\n");
	}else if(b>=35){
		printf("重度肥胖\n");
	}else {
		printf("你輸入了不正常的數字\n");
	} 
	printf("請輸入體重(公斤): ");
	scanf("%f",&w);
	printf("請輸入身高(公尺): ");
	scanf("%f",&t);
	b=w/(t*t);}
}
