#include<stdio.h>
#include<math.h>

int main(){
	int mode, operation, cte;
	float a, b;
	float resultat;
	const float pi = 3.14159;
	const float e = 2.71828;
	
	do{
		printf("\nChoisir votre mode d'utilisation (saisir le nombre) : ");
		printf("\n1. Operations Mathematiques disponibles : +, -, *, /, sqrt, pow, log");
		printf("\n2. Constantes scientifiques : pi et e");
		printf("\n0. Quitter\n");
		scanf("%d", &mode);
		if(mode == 1){
			printf("\nChoisir une operation (saisir le nombre) : ");
			printf("\n1. +");
			printf("\n2. -");
			printf("\n3. *");
			printf("\n4. /");
			printf("\n5. Racine carre");
			printf("\n6. Puissance");
			printf("\n7. Logarithme");
			printf("\n0. Quitter\n");
			scanf("%d", &operation);
				switch(operation){
					case 0:
						mode = 0;
						break;
					case 1:
						printf("\nSaisir le premier nombre: ");
						scanf("%f",&a);
						printf("\nSaisir le deuxieme nombre: ");
						scanf("%f",&b);
						resultat = a + b;
						break;
					case 2:
						printf("\nSaisir le premier nombre: ");
						scanf("%f",&a);
						printf("\nSaisir le deuxieme nombre: ");
						scanf("%f",&b);
						resultat = a - b;
						break;
					case 3:
						printf("\nSaisir le premier nombre: ");
						scanf("%f",&a);
						printf("\nSaisir le deuxieme nombre: ");
						scanf("%f",&b);
						resultat = a * b;
						break;
					case 4:
						printf("\nSaisir le premier nombre: ");
						scanf("%f",&a);
						printf("\nSaisir le deuxieme nombre: ");
						scanf("%f",&b);
						if (b != 0){
							resultat = a / b;
						} else {
							printf("\nLa division par zero n'est pas possible.\n");
						}
						break;
					case 5:
						printf("\nSaisir un nombre: ");
						scanf("%f",&a);
						resultat = sqrt(a);
						break;
					case 6:
						printf("\nSaisir un nombre: ");
						scanf("%f",&a);
						printf("\nSaisir la puissance: ");
						scanf("%f",&b);
						resultat = pow(a, b);
						break;
					case 7:
						printf("\nSaisir un nombre: ");
						scanf("%f",&a);
						resultat = log(a);
						break;
					default:
						printf("\nChoix Invalide.\n");
					}
					printf("\nresultat = %.4f\n", resultat);
				} else if (mode == 2){
					printf("\nChoisir une constante (saisir le nombre) : ");
					printf("\n1. pi");
					printf("\n2. e");
					printf("\n0. Quitter\n");
					scanf("%d", &cte);
					switch(cte){
						case 0:
							mode = 0;
							break;
						case 1:
							resultat = pi;
							break;
						case 2:
							resultat = e;
							break;
						default:
							printf("\nChoix Invalide.\n");
					}
					printf("\nconstante = %.4f\n", resultat);
				} else {
					printf("\nChoix Invalide.\n");
				}
		}while(mode!=0);

	return 0;
}