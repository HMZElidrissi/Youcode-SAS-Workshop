#include<stdio.h>

int main(){
	int annee, mois, jour;
	
    printf("Saisir une date sous le format suivant: jj/mm/aaaa : ");
    scanf("%d/%d/%d", &jour, &mois, &annee);
	
	switch(mois){
		case 1:
			printf("\n%d-Janvier-%d", jour, annee);
			break;
		case 2:
			printf("\n%d-Fevrier-%d", jour, annee);
			break;
		case 3:
			printf("\n%d-Mars-%d", jour, annee);
			break;
		case 4:
			printf("\n%d-Avril-%d", jour, annee);
			break;
		case 5:
			printf("\n%d-Mai-%d", jour, annee);
			break;
		case 6:
			printf("\n%d-Juin-%d", jour, annee);
			break;
		case 7:
			printf("\n%d-Juillet-%d", jour, annee);
			break;
		case 8:
			printf("\n%d-Aout-%d", jour, annee);
			break;
		case 9:
			printf("\n%d-Septembre-%d", jour, annee);
			break;
		case 10:
			printf("\n%d-Octobre-%d", jour, annee);
			break;
		case 11:
			printf("\n%d-Novembre-%d", jour, annee);
			break;
		case 12:
			printf("\n%d-Decembre-%d", jour, annee);
			break;	
		default:
			printf("\nSaisie Invalide.");
	}

	return 0;
}
