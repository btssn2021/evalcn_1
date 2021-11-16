#include <stdio.h>
#include <stdbool.h>
/**************prototypes fonctions***********************/
void saisieNote();
void testGrade();
float calculMoyenne();
int gestionErreur();
/*************variables globales*******************************/
float note=0,somme,nbnotes=0;
enum{TRES_INSUFFISANT='F',INSUFFISANT='D',PASSABLE='C',BON='B',TRES_BON='A'};

int main() {

    while(true)
    {
        note=-1;
        saisieNote();
        if(gestionErreur()==0) {
            testGrade();
            printf("La moyenne des notes est de %0.1f\n", calculMoyenne());
        }
    }





    return 0;
}

void saisieNote() {
    printf("Veuillez saisir la note\n");
    scanf("%f",&note);


}

void testGrade() {
    if (note >= 14 && note <= 20) {
        printf("La note est de grade %c\n", TRES_BON);
    } else if (note >= 10.5 && note <= 13.9) {
        printf("La note est de grade %c\n", BON);
    } else if (note >= 9 && note <= 10.4) {
        printf("La note est de grade %c\n", PASSABLE);
    } else if (note >= 8 && note <= 8.9) {
        printf("La note est de grade %c\n", INSUFFISANT);
    } else if (note>=0&&note <= 7.9) {
        printf("La note est de grade %c\n", TRES_INSUFFISANT);
    }
}

float calculMoyenne() {
    return somme/nbnotes;
}

int gestionErreur() {
    if(note>20||note<0||note==-1)
    {
        scanf("%*[^\n]"); //vide le scanf
        printf("Note invalide\n");
        return -1;
    }
    else
    {
        nbnotes++;
        somme+=note;
        return 0;
    }

}
