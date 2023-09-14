#include<stdio.h>

int main(){
	int a, b;
	
	printf("Entrez la valeur de a : \n");
	scanf("%d", &a);
	printf("Entrez la valeur de b : \n");
	scanf("%d", &b);

	
	if(b == 0){
		printf("La division par zero n'est pas possible.\n ");
	} else {
		int somme = a+b;
		int soustraction = a-b;
		int multiplication = a*b;
		int modulo = a%b;
		int division = (int)a / b;
		printf("a+b = %d\na-b = %d\na*b = %d\na/b = %d\na%%b = %d\n", somme, soustraction, multiplication, division, modulo);
	}
	
	return 0;
}
