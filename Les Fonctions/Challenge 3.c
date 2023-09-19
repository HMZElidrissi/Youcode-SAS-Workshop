#include<stdio.h>

int PGCD(int a, int b){
	int r = a % b;
	if(r == 0){
		return b;
	} else {
		return PGCD(b, r);
	}
}

int main(){
	int a, b;
	
	printf("donner le premier nombre: ");
	scanf("%d", &a);
	printf("donner le deuxieme nombre: ");
	scanf("%d", &b);
	printf("PGCD = %d", PGCD(a, b));
	
	return 0;
}
