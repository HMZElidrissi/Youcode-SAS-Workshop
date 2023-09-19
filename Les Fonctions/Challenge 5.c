#include<stdio.h>

void Permuter(float *a, float *b){
	float tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}

int main(){
	float a, b;
	
	printf("a = ");
	scanf("%f", &a);
	printf("b = ");
	scanf("%f", &b);
	
	Permuter(&a, &b);
	
	printf("a = %f, b = %f", a, b);

	
	return 0;
}
 
