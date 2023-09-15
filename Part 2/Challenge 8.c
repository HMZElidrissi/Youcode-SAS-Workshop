#include<stdio.h>

int main(){
	float note;
	
    printf("Entrer votre note : ");
    scanf("%f", &note);
    
    if(note<10){
    	printf("\nvous etes recale.");
	}
	if(note>=10 && note<12){
    	printf("\nmention passable.");
	}
	if(note>=12 && note<14){
    	printf("\nmention assez-bien.");
	}
	if(note>=14 && note<16){
    	printf("\nmention bien.");
	}
	if(note>=16){
    	printf("\nmention tres bien.");
	}

	return 0;
}
