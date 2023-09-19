#include<stdio.h>
#include<string.h>

void search(char text[], char x){
	int i = 0;
	while(i < strlen(text) && x != text[i]){
		i++;
	}
	if(i < strlen(text)){
		printf("%c se trouve dans la position %d\n", x, i);
	} else {
		printf("Element non trouve!!\n");
	}
}

void swap_in_text(char text[], char a, char b){
	int i = 0;
	while(i < strlen(text)){
		if(text[i] == a){
            text[i] = b;
        }
        else if(text[i] == b){
            text[i] = a; 
        }
		i++;
	}
}

int main(){
	//Initialiser un tableau avec le texte suivant : "Quel sinistre mot !"
	char text[] = "Quel sinistre mot !";
	//Trouver et afficher à quelle position se trouve la lettre 'm'
	search(text, 'm');
	//Même chose pour la première lettre 's'
	search(text, 's');
	//Mettre la lettre 'm' à la place de 's' et vice versa
	swap_in_text(text, 's', 'm');
	//Afficher le texte ainsi modifié
	puts(text);
	//Demander à l’utilisateur de saisir une lettre quelconque
	printf("saisir une lettre quelconque\n");
	char character;
	scanf("%c", &character);
	//Chercher cette lettre dans le texte et afficher sa position ou un message d’erreur si elle est absente
	search(text, character);
	return 0;
}
