#include<stdio.h>

int main(){
	int tab[10];
	int i, j;
	int N = 5;
	
	//demande 10 nombres entiers à l’utilisateur
	for (i = 0; i < N; i++){
		printf("tab[%d] = ", i);
		scanf("%d", &tab[i]);
	}
	
	//trie de plus grand au plus petit
	//tri a bulle
//	int tmp;
//	for(i = 0; i < N - 1; i++)
//		for (j = 0; j < N - i - 1; j++){
//			if(tab[j] < tab[j+1]){
//				tmp = tab[j];
//				tab[j] = tab[j+1];
//				tab[j+1] = tmp;
//			}
//		}
//		
	//tri par selection
//	int indice_min;
//	int tmp;
//	for(i = 0; i < N - 1; i++){
//		indice_min = i;
//		for(j = i + 1; j < N; j++){
//			if(tab[j] < tab[indice_min])
//				indice_min = j;
//		}
//		tmp = tab[indice_min];
//		tab[indice_min] = tab[i];
//		tab[i] = tmp;
//	}

	int indice_max;
	int tmp;
	for(i = 0; i < N - 1; i++){
		indice_max = i;
		for(j = i + 1; j < N; j++){
			if(tab[j] > tab[indice_max])
				indice_max = j;
		}
		tmp = tab[indice_max];
		tab[indice_max] = tab[i];
		tab[i] = tmp;
	}
	
	//affichage des elements
	for (i = 0; i < N; i++){
		printf("\ntab[%d] = %d", i, tab[i]);
	}
	
	return 0;
}
