#include<stdio.h>
#include<math.h>

int main(){
	float x1, x2, y1, y2;
	float MN;
	
	printf("Donner les coordonnees du premier point (M) : \n");
	printf("x1 = ");
	scanf("%f", &x1);
	printf("y1 = ");
	scanf("%f", &y1);
	
	printf("Donner les coordonnees du deuxieme point (N) : \n");
	printf("x2 = ");
	scanf("%f", &x2);
	printf("y2 = ");
	scanf("%f", &y2);
	
	MN = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
	printf("\nLa distance entre M et N est MN = %f", MN);
	
	return 0;
}
