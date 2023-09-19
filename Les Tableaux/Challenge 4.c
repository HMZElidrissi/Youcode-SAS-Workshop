#include<stdio.h>

int main(){
	float tab_notes[50];
	float note;
	int tmp = 0;
	int cmp = 0;
	int nbrSup = 0;
	float total = 0;
	float max, min;
	int max_indice, min_indice;
	float moyenne;
	int i;
	
	//Saisir les notes et les mémoriser dans un tableau
	printf("Saisir des notes (entre 0 et 20)\n");
	printf("Lorsque une valeur est hors de cet intervalle la saisie arretera.\n");
	do{
		printf("note %d: ", tmp+1);
		scanf("%f", &note);
		if(note == 0){
			printf("ERREUR\n");
		} else {
			if(note < 20 && note > 0){
				tab_notes[tmp] = note;
				//Compter les notes saisies
				cmp++;
			}	
		}
		tmp++;
	}while(note <= 20 && note >= 0);
	
	//Afficher le nombre des notes saisies
	printf("Le nombre des notes saisies: %d \n", cmp);
	
	//Calculer et afficher la moyenne
	for (i = 0; i < cmp; i++){
		total += tab_notes[i];
	}
	moyenne = total / cmp;
	printf("\nLa moyenne des notes est: %.3f", moyenne);
	
	//Afficher et comparer chaque note à la moyenne
	printf("\nLes element sont: ");
	max = tab_notes[0];
	max_indice = 0;
	min = tab_notes[0];
	min_indice = 0;
	for (i = 0; i < cmp; i++){
		printf("\ntab_notes[%d] = %.3f, ", i+1, tab_notes[i]);
		if(tab_notes[i] == moyenne){
			printf("egal a la moyenne. \n");
		} else if (tab_notes[i] < moyenne){
			printf("inferieur a la moyenne. \n");
		} else {
			printf("superieur a la moyenne. \n");
			nbrSup++; //Compter combien il y a de notes supérieures à la moyenne
		}
		
		//Rechercher la note la plus grande et sa position
		if(tab_notes[i] > max){
			max = tab_notes[i];
			max_indice = i;
		}
		//Rechercher la note la plus petite et sa position
		if(tab_notes[i] < min){
			min = tab_notes[i];
			min_indice = i;
		}
	}
	
	//Afficher combien il y a de notes supérieures à la moyenne
	printf("\nIl y a %d de notes superieures a la moyenne.", nbrSup);
	//Afficher la note la plus petite
	printf("\nL'element le plus petit est: %.3f d'indice %d", min, min_indice);
	//Afficher la note la plus grande
	printf("\nL'element le plus grand est: %.3f d'indice %d", max, max_indice);
	
	return 0;
}
