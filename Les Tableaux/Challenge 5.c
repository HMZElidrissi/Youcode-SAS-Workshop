#include<stdio.h>
#include<string.h>

int main(){
	char nom[50];
	int cmp = 0;
	
	//Demander � l�utilisateur de saisir son nom
	printf("Saisir votre nom\n");
	gets(nom);
	
	//Compter les caract�res et afficher leur nombre
	while(nom[cmp] != '\0'){
		cmp++;
	}	
	//Afficher le nombre des caract�res
	printf("\nIl y a %d de caracteres dans votre nom.", strlen(nom));
	printf("\nIl y a %d de caracteres dans votre nom.", cmp);
	
	return 0;
}
