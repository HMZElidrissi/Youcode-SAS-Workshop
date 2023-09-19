#include<stdio.h>
#include<string.h>

int main(){
	char nom[50];
	int cmp = 0;
	
	//Demander à l’utilisateur de saisir son nom
	printf("Saisir votre nom\n");
	gets(nom);
	
	//Compter les caractères et afficher leur nombre
	while(nom[cmp] != '\0'){
		cmp++;
	}	
	//Afficher le nombre des caractères
	printf("\nIl y a %d de caracteres dans votre nom.", strlen(nom));
	printf("\nIl y a %d de caracteres dans votre nom.", cmp);
	
	return 0;
}
