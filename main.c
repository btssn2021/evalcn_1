#include <stdio.h>
#include <stdbool.h>

int main() {
    float note=0,somme=0,nbnotes=0;
    enum{TRES_INSUFISSANT='F',INSUFFISANT='D',PASSABLE='C',BON='B',TRES_BON='A'};
    while(true) {
        note=-1; //remet à -1 pour la gestion des erreurs
        printf("Veuillez saisir la note\n");
        scanf("%f", &note);
        if (note >= 14 && note <= 20) {
            printf("La note est de grade %c\n", TRES_BON);
        } else if (note >= 10.5 && note <= 13.9) {
            printf("La note est de grade %c\n", BON);
        } else if (note >= 9 && note <= 10.4) {
            printf("La note est de grade %c\n", PASSABLE);
        } else if (note >= 8 && note <= 8.9) {
            printf("La note est de grade %c\n", INSUFFISANT);
        } else if (note>=0&&note <= 7.9) {
            printf("La note est de grade %c\n", TRES_INSUFISSANT);
        }
        else{ //cas où il y a une erreur
            scanf("%*[^\n]"); //vide le scanf
            printf("Note invalide\n");
            continue;
        }
        /*****************************calcul de la moyenne****************************/
        nbnotes++; // incrémente le nombre de notes
        somme+=note; //calcul de la somme
        printf("La moyenne des notes est de %0.1f\n",somme/nbnotes);
    }


    return 0;
}
