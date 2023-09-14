#include<stdio.h>

int main(){
	int number;
	printf("Donner votre nombre : \n");
	scanf("%d", &number);
	printf("Le nombre entier: %d", number);
	printf("\nLa valeur equivalente en octal: %o", number);
	printf("\nLa valeur equivalente en hexadecimal: %x", number);
	
	/*
	int decimalNumber, quotient, octalNumber[20];
	
	printf("Donner votre nombre : \n");
	scanf("%d", &decimalNumber);
	
	printf("Le nombre entier: %d", decimalNumber);
	
	quotient = decimalNumber;
	int i=0;
	while (quotient != 0) {
        octalNumber[i++] = quotient % 8;
        quotient = quotient / 8;
    }
    
    printf("\nLa valeur equivalente en octal:");
    
    int j;
    for (j = i - 1; j >= 0; j--) {
        printf("%d", octalNumber[j]);
    }
    */
	
	return 0;
}
