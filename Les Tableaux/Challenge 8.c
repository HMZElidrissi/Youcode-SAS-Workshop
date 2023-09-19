#include<stdio.h>

int main(){
	int L, C;
	do{
		//lire les dimensions L et C d'un tableau T
		printf("Saisir les dimensions L et C d'un tableau T\n");
		printf("dimensions maximales: 10 lignes et 10 colonnes\n");
		printf("L = ");
		scanf("%d", &L);
		printf("C = ");
		scanf("%d", &C);
	} while(L > 50 || C > 50);
	
	//Remplir le tableau
	char M[L][C];
	int i, j;
	for(i = 0; i < L; i++){
		for(j = 0; j < C; j++){
			printf("M[%d][%d] = ", i, j);
			scanf(" %c", &M[i][j]);
		}
	}
	
	//Remplir la transpose
	char T[L*C];
	int k = 0;
	for(i = 0; i < L; i++){
		for(j = 0; j < C; j++){
			T[k++] = M[i][j];
		}
	}
	
	
	//Afficher le tableau
	for(i = 0; i < L; i++){
		for(j = 0; j < C; j++){
			printf("%c ", M[i][j]);
		}
		printf("\n");
	}
	
	//Afficher la transpose
	for(i = 0; i < L * C; i++){
		printf("%c ", T[i]);
	}
		
	return 0;
}
