#include<stdio.h>
#include<stdbool.h>

bool is_prime(int N){
	int i;
	
	if (N <= 1) {
        return false;
    } else {
        for (i = 2; i * i <= N; i++) {
            if (N % i == 0) {
                return false;
            }
        }
    }
    
    return true;
}

int main(){
	int N;
	
	printf("Donner un  nombre : \n");
	scanf("%d", &N);
   
	if (!is_prime(N)){
   		printf("C'est un nombre non premier.");
   	} else {
   		printf("C'est un nombre premier.");
	}
	
	return 0;
}
