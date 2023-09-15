#include<stdio.h>

int main(){
	int N, i;
	int is_prime = 1;
	
	printf("Donner un  nombre : \n");
	scanf("%d", &N);
	
	if (N <= 1) {
        is_prime = 0;
    } else {
        for (i = 2; i * i <= N; i++) {
            if (N % i == 0) {
                is_prime = 0;
                break;
            }
        }
    }
   
	if (is_prime == 0){
   		printf("C'est un nombre non premier.");
   	} else {
   		printf("C'est un nombre premier.");
	}
	
	return 0;
}
