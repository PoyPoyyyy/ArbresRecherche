#include <stdio.h>
#include <stdlib.h>
#include "arbre.h"

int main(void) {

    printf("Arbres de recherche :\n");
    struct noeud * arbre = NULL;
    int continuer;
    int trouve;


    do {
        struct noeud * n = creerNoeud();
        arbre = ajouterNoeud(arbre, n);
        printf("Saisir une autre valeur : 0 / Arréter la sasie : 1 \n");
        printf("--> ");
        scanf("%d", &continuer);
    } while (continuer == 0);


    printf("Affichage croissant de l'arbre : \n");
    afficherArbreCroissant(arbre);
    printf("\n");

    printf("Affichage décroissant de l'abre : \n");
    afficherArbreDecroissant(arbre);
    printf("\n");

    printf("La valeur minimale de l'arbre est : \n");
    printf("%d \n", trouverMin(arbre));

    printf("La valeur maximale de l'arbre est : \n");
    printf("%d \n", trouverMax(arbre));

    printf("Recherche de la valeur 100 dans l'arbre : \n");
    trouve = rechercherValeur(arbre, 100);
    printf("%d \n", trouve);

    printf("Recherche de la valeur 200 dans l'arbre : \n");
    trouve = rechercherValeur(arbre, 200);
    printf("%d \n", trouve);

    return 0;
}
