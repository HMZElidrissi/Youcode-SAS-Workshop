#include<stdio.h>

int main(){
	int number;
	printf("Donner votre nombre : \n");
	scanf("%d", &number);
	if(number%2 == 0){
		printf("ce nombre est paire.");
	} else {
		printf("ce nombre est impaire");
	}
	
	return 0;
}
