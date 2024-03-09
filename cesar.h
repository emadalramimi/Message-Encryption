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
*  Nom-prénom2 : EL RAMIMI Emad         Groupe B2                             *
*                                                                             *
*******************************************************************************
*                                                                             *
*  Nom du fichier : fonctions.c                                               *
*                                                                             *
******************************************************************************/

#include <stdio.h>

bool verificationAlphanumMessage (char message[]);
void chiffrementMessage(char message[], int cle);
void dechiffrementMessage(char messagecode[], int cle);
void afficheInterface(char message[]);