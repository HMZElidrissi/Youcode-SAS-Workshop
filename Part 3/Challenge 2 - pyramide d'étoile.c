#include<stdio.h>

int main(){
	int N, espace, i, j;
	
	printf("Donner le nombre des lignes a composer : \n");
	scanf("%d", &N);
	
	for (i = 1; i <= N; i++) {
		j = 0;
		for (espace = 1; espace <= N - i; espace++) {
			printf("  ");
		}
		
		while (j != 2 * i - 1) {
			printf("* ");
			j++;
		}
		printf("\n");
   }
	
	return 0;
}
