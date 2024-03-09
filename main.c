/******************************************************************************
*  ASR => M2101                                                               *
*******************************************************************************
*                                                                             *
*  N° de Sujet : 3                                                            *
*                                                                             *
*******************************************************************************
*                                                                             *
*  Intitulé : Chiffrement de messages                                         *
*                                                                             *
*******************************************************************************
*                                                                             *
*  Nom-prénom1 : WETTER Liam            Groupe B2                             *
*                                                                             *
*  Nom-prénom2 : MILED Willem           Groupe B2                             *
*                                                                             *
*  Nom-prénom2 : KERCHOUN Zahra         Groupe B2                             *
*                                                                             *
*  Nom-prénom2 : AL RAMIMI Emad         Groupe B2                             *
*                                                                             *
*******************************************************************************
*                                                                             *
*  Nom du fichier : fonctions.c                                               *
*                                                                             *
******************************************************************************/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include "cesar.h"

void main(){
    char message[1000];
    int cle;
    int choix = 0;
    while (choix != 3) {
        printf("Veuillez saisir votre message (la limite est de 1000 caractères) :\n");
        fgets(message, 1000, stdin);
        if (verificationAlphanumMessage(message)){
            while (choix != 3){
                afficheInterface(message);
                scanf("%d", &choix);
                if (choix == 1) {
                    printf("Veuillez saisir votre cle : ");
                    scanf("%d", &cle);
                    chiffrementMessage(message,cle);
                    printf("%s",message);
                } else if ( choix == 2) {
                    printf("Veuillez saisir votre cle : ");
                    scanf("%d", &cle);
                    dechiffrementMessage(message,cle);
                    printf("%s",message);                
                } else if (choix < 3) {
                    printf("Veuillez entrer un nombre correspondant à une des requêtes\n");
                }

            }
        }
    }
}