#include<stdio.h>
#include<math.h>

int main(){
	float a, b, c, delta, x1, x2;
	
    printf("Entrez les coefficients de l'equation : ");
    printf("\na = ");
    scanf("%f", &a);
    printf("\nb = ");
    scanf("%f", &b);
    printf("\nc = ");
    scanf("%f", &c);
	
    delta = pow(b, 2) - 4 * a * c;

    if (delta > 0){
        x1 = (-b + sqrt(delta))/2*a;
        x2 = (-b - sqrt(delta))/2*a;
        printf("\nSolutions: x1 = %f, x2 = %f", x1, x2);
    } else if (delta == 0){
        x1 = -b/(2*a);
        printf("\nSolution: x1 = %f", x1);
    } else {
        printf("Il n'y a pas de solutions reelles");
    }

	return 0;
}
