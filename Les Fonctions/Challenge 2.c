#include<stdio.h>

int Somme(int a, int b){
	return a + b;
}
int main(){
	int a, b;
	printf("donner le premier nombre: ");
	scanf("%d", &a);
	printf("donner le deuxieme nombre: ");
	scanf("%d", &b);
	printf("la somme: %d", Somme(a, b));
	return 0;
}
