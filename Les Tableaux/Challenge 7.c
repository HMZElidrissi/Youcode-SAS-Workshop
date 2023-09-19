#include<stdio.h>

int main(){
	int L, C;
	do{
		//lire les dimensions L et C d'un tableau T
		printf("Saisir les dimensions L et C d'un tableau T\n");
		printf("dimensions maximales: 50 lignes et 50 colonnes\n");
		printf("L = ");
		scanf("%d", &L);
		printf("C = ");
		scanf("%d", &C);
	} while(L > 50 && C > 50);
	
	//Remplir le tableau
	int T[L][C];
	int i, j;
	for(i = 0; i < L; i++){
		for(j = 0; j < C; j++){
			printf("T[%d][%d] = ", i, j);
			scanf("%d", &T[i][j]);
		}
	}
	
	//Afficher le tableau
	int somme = 0;
	for(i = 0; i < L; i++){
		for(j = 0; j < C; j++){
			somme += T[i][j];
			printf("T[%d][%d] = %d\n", i, j, T[i][j]);
		}
	}
	
	printf("La somme de ses elements est: %d", somme);
	
	return 0;
}
