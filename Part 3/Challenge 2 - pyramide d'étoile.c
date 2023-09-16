#include<stdio.h>

int main(){
	int N, espace, i, j;
	
	printf("Donner le nombre des lignes a composer : \n");
	scanf("%d", &N);
	
	for (i = 1; i <= N; i++) {
		for (espace = 1; espace <= N - i; espace++) {
			printf("  ");
		}
		
//		j = 0;
//		while (j != 2 * i - 1) {
//			printf("* ");
//			j++;
//		}

		for(j = 0; j < (2 * i) - 1; j++){
			printf("* ");
		}
		
		printf("\n");
		
   }
	
	return 0;
}
