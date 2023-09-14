#include<stdio.h>

int main(){
	float a, b, c, d;
	
	printf("Entrez la valeur de a : \n");
	scanf("%f", &a);
	printf("Entrez la valeur de b : \n");
	scanf("%f", &b);
	printf("Entrez la valeur de c : \n");
	scanf("%f", &c);
	printf("Entrez la valeur de d : \n");
	scanf("%f", &d);


	float Somme = a+b+c+d;
	float Moyenne = Somme/4;

	printf("Somme = %f\nMoyenne = \n", Somme, Moyenne);

	return 0;
}
