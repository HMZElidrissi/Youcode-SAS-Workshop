#include<stdio.h>
#include<stdbool.h>

bool is_perfect(int N){
	int i, tmp = 0;
	
	for(i = 1; i < N - 1; i++){
		if(N % i == 0)
			tmp += i;
	}
    return N == tmp;
}

int main(){
	int N;
	
	printf("Donner un  nombre : \n");
	scanf("%d", &N);
   
	if (!is_perfect(N)){
   		printf("C'est un nombre non parfait.");
   	} else {
   		printf("C'est un nombre parfait.");
	}
	
	return 0;
}
