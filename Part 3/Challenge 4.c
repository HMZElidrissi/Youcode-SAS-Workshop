#include<stdio.h>

int main(){
	int serie[40];
	int i=0;
	int j;
	int somme = 0;
	int Q;
	
	printf("Vous allez inserer une serie d'entiers positifs inferieurs a 100 terminee par 0: \n");
	printf("pour quitter enter '0' \n");
	do{
		printf("serie[%d] = ", i+1);
		scanf("%d", &Q);
		if (Q == 0){
			break;
		}
		if (Q > 100) {
            printf("Nombre superieur a 100 ignore.\n");
            continue;
        }
		if(Q % 10 != 0){
			printf("Nombre ne termine pas par '0' ignore.\n");
            continue;
		}
		serie[i] = Q;
		i++;
	}while(1);
	
	int max = serie[0];
	for(j = 0; j < i; j++){
		somme = somme + serie[j];
		if(serie[j] > max){
			max = serie[j];
		}
	}
	
	printf("la somme des elements de cette serie est %d \n", somme);
	printf("le max des elements de cette serie est %d \n", max);
	
	return 0;
}
