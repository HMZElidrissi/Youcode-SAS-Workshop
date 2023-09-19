#include<stdio.h>
#include<math.h>
// EquationBicarre: ax^4 + bx^2 + c = 0
void EquationBicarre(float a, float b, float c){
	float delta = pow(b, 2) - 4 * a * c;
	float x1, x2;

    if (delta >= 0){
        x1 = (-b + sqrt(delta))/(2*a);
        x2 = (-b - sqrt(delta))/(2*a);
        if(x1 >= 0 && x2 >= 0){
        	printf("\nSolutions: \nx1 = %f, \nx2 = %f, \nx3 = %f, \nx4 = %f", sqrt(x1),-sqrt(x1), sqrt(x2), -sqrt(x2));
		}
		if(x1 >= 0 && x2 < 0){
        	printf("\nSolutions: \nx1 = %f, \nx2 = %f", sqrt(x1),-sqrt(x1));
		}
		if(x1 < 0 && x2 >= 0){
        	printf("\nSolutions: \nx1 = %f, \nx2 = %f", sqrt(x2),-sqrt(x2));
		}
		if(x1 < 0 && x2 < 0){
        	printf("\nIl n'y a pas de solutions reelles");
		}    
    } else {
        printf("Il n'y a pas de solutions reelles");
    }
}
int main(){
	float a, b, c;
	
    printf("Entrez les coefficients de l'equation : ");
    printf("\na = ");
    scanf("%f", &a);
    printf("\nb = ");
    scanf("%f", &b);
    printf("\nc = ");
    scanf("%f", &c);
	
	EquationBicarre(a, b, c);
	
	return 0;
}
