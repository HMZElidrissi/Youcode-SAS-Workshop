#include<stdio.h>

int main(){
	int nombre;
	
    printf("Entrer un nombre : ");
    scanf("%d", &nombre);
    
    if(nombre<0){
    	printf("Ce nombre est negatif.");
	} else if(nombre>0) {
		printf("\nCe nombre est positif.");
	} else {
		printf("\nCe nombre est egal a zero.");
	}

	return 0;
}
