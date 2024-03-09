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

// verificationAlphanumMessage
// Verifie si un message comporte des charactères spéciaux interdits
// Paramètres : message un tableau de charactères
// Return : un booléen
bool verificationAlphanumMessage (char message[]){
    for(int i = 0; i < strlen(message)-1; i++){
        if ((((int)message[i]) >= 0 && ((int)message[i]) < 32)||(((int)message[i]) > 32 && ((int)message[i]) < 65)||(((int)message[i]) > 90 && ((int)message[i]) < 97)||(((int)message[i]) > 122 && ((int)message[i]) <= 127))  {
            return 0;
        }
    }
    return 1;
}

// chiffrementMessage
// Permet de coder le message de base avec le code de César
// Paramètres : message un tableau de charactères, cle un integer
// Return : rien
void chiffrementMessage(char message[], int cle) {
    int i = 0;
    while (message[i] != '\0') {
        // Si la lettre est une majuscule
        if (message[i] >= 'A' && message[i]<= 'Z') {
            message[i] = 'A' + ((message[i] - 'A') + cle) % 26;
        } else if (message[i] >= 'a' && message[i]<= 'z') {
            // Si la lettre est une minuscule
            message[i] = 'a' + ((message[i] - 'a') + cle) % 26;
        }
    i++;
    }
}
// dechiffrementMessage
// Permet de retrouver le message de base avec le code de César
// Paramètres : messagecode un tableau de characteres, cle un integer
// Return : rien
void dechiffrementMessage(char messagecode[], int cle){
    int i = 0;
    while (messagecode[i] != '\0') {
        // Si la lettre est une majuscule
        if (messagecode[i] >= 'A' && messagecode[i]<= 'Z') {
            messagecode[i] = 'A' + ((messagecode[i] - 'A') +26- cle% 26) % 26;
        } else if (messagecode[i] >= 'a' && messagecode[i]<= 'z') {
                messagecode[i] = 'a' + ((messagecode[i] - 'a') +26- cle% 26) % 26;
        }
    i++;
    }
}

void afficheInterface(char message[]) {
    printf("\n\n---------------------------------------------------\n");
    printf("MESSAGE :\n");
    printf("%s",message);
    printf("---------------------------------------------------\n");
    printf("Crypter le message : 1\n");
    printf("---------------------------------------------------\n");
    printf("Décrypter le message : 2\n");
    printf("---------------------------------------------------\n");
    printf("Quitter : 3\n");
    printf("---------------------------------------------------\n");
}