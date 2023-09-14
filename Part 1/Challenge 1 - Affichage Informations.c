#include<stdio.h>

int main(){
	char Nom[50], Prenom[50];
	char Sexe;
	int Age; 
	char numTelephone[15];
	
	printf("Entrez votre nom : ");
    scanf("%s", Nom);
    printf("Entrez votre prenom : ");
    scanf("%s", Prenom);
    printf("Entrez votre sexe : (M/F) ");
    scanf(" %c", &Sexe);
    printf("Entrez votre age : ");
    scanf("%d", &Age);
    printf("Entrez votre numéro de téléphone : ");
    scanf("%s", numTelephone);
    
    printf("\nInformations personnelles :\n");
    printf("Nom : %s\n", Nom);
    printf("Prénom : %s\n", Prenom);
    printf("Âge : %d ans\n", Age);
    printf("Sexe : %c\n", Sexe);
    printf("Numéro de téléphone : %s\n", numTelephone);
	
	return 0;
}
