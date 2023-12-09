#ifndef ARBRE_H
#define ARBRE_H

struct noeud {
    int valeur;
    struct noeud * nG;
    struct noeud * nD;
};

void creerNoeud(int valeur);
struct noeud * ajouterNoeud(struct noeud * arbre, struct noeud * noeud);
struct noeud * supprimerNoeud(struct noeud * arbre, int valeur);
void afficherArbreCroissant(struct noeud * arbre);
void afficherArbreDecroissant(struct neoud  * arbre);
void afficherMax(struct noeud * arbre);
void afficherMin(struct noeud * arbre);
bool rechercherValeur(struct noeud * arbre, int valeur);

#endif