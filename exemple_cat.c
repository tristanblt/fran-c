/*
** EPITECH PROJECT, 2020
** francais demo
** File description:
** mon cat
*/

#include "francais.h"

debut_fonction(vrai_ou_faux, lit_et_ecrit_le_fichier, entier descripteur_de_fichier)
    entier taille = 0;
    caractere boite_a_donnee[1024];

    taille = lit(descripteur_de_fichier, boite_a_donnee, 1024);
    si(taille < 0)
        retourne faux;
    fin_de_si
    
    tant_que(taille > 0)
        ecrit(sortie_standard, boite_a_donnee, taille);
        taille = lit(descripteur_de_fichier, boite_a_donnee, 1024);
    fin_de_tant_que

    retourne vrai;
fin_de_fonction

debut_fonction(entier, point_de_depart, entier ac, tableau_de(phrase) av)
    entier descripteur_de_fichier = 0;
    entier valeur_de_retour;
    
    si(ac == 1)
        affiche("Utilisation: %s [fichier]\n", av[0]);
        retourne 84;
    fin_de_si
    
    descripteur_de_fichier = ouvre(av[1], O_RDONLY);
    
    si(descripteur_de_fichier == -1)
        affiche_sur(sortie_erreur, "Le fichier n'a pas pu etre ouvert.\n");
        retourne 84;
    fin_de_si
    
    si (lit_et_ecrit_le_fichier(descripteur_de_fichier) == faux)
        affiche_sur(sortie_erreur, "Il y a eu une erreur avec la lecture.\n");
        valeur_de_retour = 84;
    sinon
        valeur_de_retour = 0;
    fin_de_si
    ferme(descripteur_de_fichier);
    retourne valeur_de_retour;
fin_de_fonction
