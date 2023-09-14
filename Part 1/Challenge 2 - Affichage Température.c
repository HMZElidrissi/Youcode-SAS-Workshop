#include<stdio.h>

int main(){
	float F, C;
	
	printf("Entrez la température en Fahrenheit : ");
	scanf("%f", &F);
	
	C = (F-32)/1.8;
	printf("%f Fahrenheit equivaut a %f Celsius, ", F, C);
	
	if(C < 0){
		printf("Ce qui est considere comme tres froid.");
	} else if (C < 10){
		printf("Ce qui est considere comme froid.");
	} else if (C < 30){
		printf("Ce qui est considere comme chaud.");
	} else {
		printf("Ce qui est considere comme tres chaud.");
	}
}
