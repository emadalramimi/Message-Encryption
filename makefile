#******************************************************************************
#  ASR => M2101                                                               *
#******************************************************************************
#                                                                             *
#  N° de Sujet : 3                                                            *
#                                                                             *
#******************************************************************************
#                                                                             *
#  Intitulé : Chiffrement de messages                                         *
#                                                                             *
#******************************************************************************
#                                                                             *
#  Nom-prénom1 : WETTER Liam            Groupe B2                             *
#                                                                             *
#  Nom-prénom2 : MILED Willem           Groupe B2                             *
#                                                                             *
#  Nom-prénom2 : KERCHOUN Zahra         Groupe B2                             *
#                                                                             *
#  Nom-prénom2 : EL RAMIMI Emad         Groupe B2                             *
#                                                                             *
#******************************************************************************
#                                                                             *
#  Nom du fichier : fonctions.c                                               *
#                                                                             *
#******************************************************************************

all: main cesar clean

cesar: cesar.c cesar.h
	gcc -c cesar.c

main: main.c cesar.o
	gcc cesar.o main.c -o main
	./main

clean:
	rm main | rm cesar.o