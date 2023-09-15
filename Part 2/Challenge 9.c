#include<stdio.h>

int main(){
	char car;
	int ASCII;
	
    printf("Entrer votre caractere : ");
    scanf("%c", &car);
    
    ASCII = (int)car;
    if((ASCII<=90 && ASCII>=65) || (ASCII<=122 && ASCII>=97)){
    	printf("Ce caractere est un alphabet.");
    	if(ASCII<=90 && ASCII>=65){
    	printf("\nEn plus, il est une majuscule.");
		} else {
			printf("\nEn plus, il est une minuscule.");
		}
	} else {
		printf("\nCe caractere n'est pas un alphabet.");
	}

	return 0;
}
