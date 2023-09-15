#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
	srand(time(NULL));
	int jour = (rand() % 7) + 1;
	
	switch(jour){
		case 1:
			printf("\nLundi");
			break;
		case 2:
			printf("\nMardi");
			break;
		case 3:
			printf("\nMercredi");
			break;
		case 4:
			printf("\nJeudi");
			break;
		case 5:
			printf("\nVendredi");
			break;
		case 6:
			printf("\nSamedi");
			break;
		case 7:
			printf("\nDimanche");
			break;
	}

	return 0;
}
