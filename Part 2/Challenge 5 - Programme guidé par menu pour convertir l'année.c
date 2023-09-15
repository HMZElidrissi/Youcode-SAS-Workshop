#include<stdio.h>

int main(){
	int Annee, Mois, Jours, Heures, Minutes, Secondes;
	int joursAnnee = 365;
	int joursMois = 30;
	int Mode;
	
    printf("Saisir une annee : ");
    scanf("%d", &Annee);
    
    Mois = (Annee * joursAnnee)/joursMois;
	Jours = Mois * 30;
	Heures = Jours * 24;
	Minutes = Heures * 60;
	Secondes = Minutes * 60;
	
	printf("\nChoisir votre mode de conversion (Saisir le nombre) : ");
	printf("\n1. En Mois");
	printf("\n2. En Jours");
	printf("\n3. En Heures");
	printf("\n4. En Minutes");
	printf("\n5. En Secondes\n");
	scanf("%d", &Mode);
	
	switch(Mode){
		case 1:
			printf("%d mois", Mois);
			break;
		case 2:
			printf("%d jours", Jours);
			break;
		case 3:
			printf("%d heures", Heures);
			break;
		case 4:
			printf("%d minutes", Minutes);
			break;
		case 5:
			printf("%d secondes", Secondes);
			break;
		default:
			printf("Mode Invalide.");
	}

	return 0;
}
