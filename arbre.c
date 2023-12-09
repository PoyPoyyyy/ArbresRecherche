#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include "arbre.h"

struct noeud * creerNoeud() {
    int valeur = 0;
    printf("Quelle valeur souhaitez-vous saisir dans l'arbre ? \n");
    printf("--> ");
    scanf("%d", &valeur);

    struct noeud * n = (struct noeud *)malloc(sizeof(struct noeud));
    if (n == NULL){
        printf("Erreur lors de la création du nouveau noeud");
        return NULL;
    }
    n->nG = NULL;
    n->nD = NULL;
    n->valeur = valeur;
    return n;
}

struct noeud *ajouterNoeud(struct noeud * arbre, struct noeud * n){
    if (arbre == NULL)
        return n;
    if (n->valeur < arbre->valeur) {
        arbre->nG = ajouterNoeud(arbre->nG, n);
    } else if (n->valeur > arbre->valeur) {
        arbre->nD = ajouterNoeud(arbre->nD, n);
    }
    return arbre;
}

void afficherArbreCroissant (struct noeud * arbre) {
    if (arbre->nD != NULL) {
        afficherArbreCroissant(arbre->nD);
    }
    printf("%d ", arbre->valeur);
    if (arbre->nG != NULL) {
        afficherArbreCroissant(arbre->nG);
    }
}

void afficherArbreDecroissant (struct noeud * arbre) {
    if (arbre->nG != NULL) {
        afficherArbreDecroissant(arbre->nG);
    }
    printf("%d ", arbre->valeur);
    if (arbre->nD != NULL) {
        afficherArbreDecroissant(arbre->nD);
    }
}