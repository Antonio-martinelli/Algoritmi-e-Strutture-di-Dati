//
//  alberi_comune.h
//  esercitazione4
//
//  Created by Antonio on 02/07/15.
//  Copyright (c) 2015 Antonio. All rights reserved.
//

#ifndef esercitazione4_alberi_comune_h
#define esercitazione4_alberi_comune_h
#include <stdio.h>

typedef struct elem {
    int info;
    struct elem* sx;
    struct elem* dx;
} nodo_albero;

typedef nodo_albero* albero;

int esiste_foglia(albero, int);
int altezza(albero);
int num_nodi_livello(albero, int);
int esiste_nodo_al_livello(albero, int, int);
int max(int, int);
int* costruisci_livello_foglia(albero, int);
int* costruisci_livello(albero, int);
int livello(albero, int);
void riempi(int*, albero, int, int*);

#endif
