#include<stdio.h>

int main(){
	char caractere;
	printf("Donner un caractère  : \n");
	scanf("%c", &caractere);
	
	switch(caractere) {
	  case 'a':
	  case 'e':
	  case 'y':
	  case 'u':
	  case 'i':
	  case 'o':
	    printf("Le caractere '%c' est une voyelle.\n", caractere);
	    break;
	  default:
	    printf("Le caractere '%c' n'est pas une voyelle.\n", caractere);
	}
	
	return 0;
}
