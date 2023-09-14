#include<stdio.h>

int main(){
	int nbr;
	
	printf("Donner votre nombre : \n");
	scanf("%d", &nbr);
	
	int c1 = (int) nbr/100;
	int c2 = (int) (nbr%100)/10;
	int c3 = nbr%10;
	
	printf("\nL'inverse du nombre %d est %d%d%d", nbr, c3,c2,c1);
	
	return 0;
}
