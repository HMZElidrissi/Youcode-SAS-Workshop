#include<stdio.h>

int main(){
	char car;
	int ASCII;
	
    printf("Entrer votre caractere : ");
    scanf("%c", &car);
    
    ASCII = (int)car;
    if(ASCII<=90 && ASCII>=65){
    	printf("Ce caractere est un alphabet majuscule.");
	} else {
		printf("\nCe caractere n'est pas un alphabet majuscule.");
	}

	return 0;
}
