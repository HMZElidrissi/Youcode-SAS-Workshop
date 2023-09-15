#include<stdio.h>

int main(){
	int nbr, inverse = 0, reste;
	
	printf("Donner votre nombre : \n");
	scanf("%d", &nbr);
	
	while (nbr != 0){
		reste = nbr % 10;
		inverse  = inverse * 10 + reste;
		nbr = nbr / 10;
	}
	
	printf("L'inverse est %d", inverse);
	
	return 0;
}
