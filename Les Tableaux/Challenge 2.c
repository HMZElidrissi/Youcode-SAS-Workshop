#include<stdio.h>

int main(){
	int tab[10];
	int i;
	
	for (i = 0; i < 10; i++){
		printf("tab[%d] = ", i+1);
		scanf("%d", &tab[i]);
	}
	
	int max = tab[0];
	int min = tab[0];
	for (i = 0; i < 10; i++){
		if(tab[i] > max){
			max = tab[i];
		}
		if(tab[i] < min){
			min = tab[i];
		}
	}
	
	printf("\nLes elements du tableau sont: ");
	for (i = 0; i < 10; i++){
		printf("\ntab[%d] = %d", i+1, tab[i]);
	}
	
	printf("\nL'element le plus petit est: %d", min);
	printf("\nL'element le plus grand est: %d", max);
	
	return 0;
}
