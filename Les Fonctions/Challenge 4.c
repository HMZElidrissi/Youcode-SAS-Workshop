#include<stdio.h>

int Max_2(int a, int b){
	if(a > b){
		return a;
	}
	return b;
}

int Max_4(int a, int b, int c, int d){
	int tmp1 = Max_2(a, b);
	int tmp2 = Max_2(c, d);
	return Max_2(tmp1, tmp2);
}

int main(){
	int a, b, c, d;
	
	printf("nombre 1 = ");
	scanf("%d", &a);
	printf("nombre 2 = ");
	scanf("%d", &b);
	printf("nombre 3 = ");
	scanf("%d", &c);
	printf("nombre 4 = ");
	scanf("%d", &d);
	printf("max = %d", Max_4(a, b, c, d));
	
	return 0;
}
