#include<stdio.h>

int main(){
	int valeur1, valeur2, somme;
	
	printf("Donner la valeur 1  : \n");
	scanf("%d", &valeur1);
	printf("Donner la valeur 2  : \n");
	scanf("%d", &valeur2);
	
	somme = valeur1 + valeur2;

    if (valeur1 == valeur2) {
        somme = somme * 3;
    }

    printf("La somme est : %d\n", somme);
	
	return 0;
}
