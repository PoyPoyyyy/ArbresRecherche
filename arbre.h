#ifndef ARBRE_H
#define ARBRE_H

#include <stdbool.h>

struct noeud {
    int valeur;
    struct noeud *nG;
    struct noeud *nD;
};

struct noeud * creerNoeud();
struct noeud * ajouterNoeud(struct noeud * arbre, struct noeud * n);
void afficherArbreCroissant(struct noeud * arbre);
void afficherArbreDecroissant(struct noeud * arbre);
int trouverMax(struct noeud * arbre);
int trouverMin(struct noeud * arbre);
bool rechercherValeur(struct noeud * arbre, int valeur);

#endif
