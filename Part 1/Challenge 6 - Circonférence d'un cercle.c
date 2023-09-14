#include<stdio.h>

int main(){
	float rayon, circonference ;
	const float pi = 3.1415;
	
	printf("Donner le rayon du cercle : \n");
	scanf("%f", &rayon);
	
	circonference = 2 * pi * rayon;
	
	printf("\nLa circonference du cercle = %f", circonference);
	
	return 0;
}
