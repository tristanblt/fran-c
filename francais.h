/*
** EPITECH PROJECT, 2020
** francais
** File description:
** fichier .h
*/

#ifndef FRANCAIS_H_
#define FRANCAIS_H_

#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdbool.h>

// conditionel

#define sors_de_la_boucle break
#define retourne return

// fonctions

#define affiche(...) printf(__VA_ARGS__)
#define affiche_sur(df, ...) dprintf(df, __VA_ARGS__)
#define point_de_depart main
#define ouvre(...) open(__VA_ARGS__)
#define lit(df, boite_a_donnee, taille) read(df, boite_a_donnee, taille)
#define ecrit(df, boite_a_donnee, taille) write(df, boite_a_donnee, taille)
#define ferme(desc_de_fichier) close(desc_de_fichier)

#define alloue(taille) malloc(taille)
#define libere(pointeur) free(pointeur)

// fonctions du developpeur

#define debut_fonction(type, nom, ...) type nom (__VA_ARGS__) {
#define fin_de_fonction }

// types

#define vrai_ou_faux bool
#define phrase char *
#define entier int
#define caractere char
#define vide void
#define tableau_de(type) type *
#define pointeur_sur(type) type *
#define adresse_de(variable) &variable

// valeurs

#define vrai true
#define faux false
#define sortie_standard 1
#define sortie_erreur 2
#define entree_standard 0

// conditions

#define si(condition) if (condition) {
#define sinon } else {
#define fin_de_si }
#define pour(condition) for (condition) {
#define fin_de_pour }
#define tant_que(condition) while (condition) {
#define fin_de_tant_que }
#define fait do {
#define jusque(condition) } while (condition);

#define non(condition) !(condition)

// autre

#define definition_de_type typedef

#endif /* !FRANCAIS_H_ */
