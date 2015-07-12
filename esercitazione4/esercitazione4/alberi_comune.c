//
//  alberi_comune.c
//  esercitazione4
//
//  Created by Antonio on 02/07/15.
//  Copyright (c) 2015 Antonio. All rights reserved.
//

#include "alberi_comune.h"
#include <stdlib.h>

int esiste_foglia(albero T, int v) {
    if (T == NULL) {
        return 0;
    }
    else {
        if (T->sx == NULL && T->dx == NULL && T->info == v)
            return 1;
        else
            return esiste_foglia(T->sx, v) || esiste_foglia(T->dx, v);
    }
}

int max(int a, int b) {
    if (a>b)
        return a;
    return b;
}

int altezza(albero T) {
    if (T == NULL)
        return -1;
    else {
        return max(altezza(T->sx), altezza(T->dx)) + 1;
    }
}

int num_nodi_livello(albero T, int l) {
    if (T == NULL) return 0;
    else {
        if (l == 0)
            return 1;
        else
            return num_nodi_livello(T->sx, l-1) + num_nodi_livello(T->dx, l-1);
    }
}

int esiste_nodo_al_livello(albero T, int v, int l) {
    if (T == NULL)
        return 0;
    else {
        if (l == 0 && T->info == v)
                return 1;
        else
            return esiste_nodo_al_livello(T->sx, v, l-1) || esiste_nodo_al_livello(T->dx, v, l-1);
    }
}

int livello(albero t, int v) {
    int h = altezza(t);
    int i = 0;
    for (i = 0; i<=h; i++)
        if (esiste_nodo_al_livello(t, v, i)) return i;
    return -1;
}


int* costruisci_livello_foglia(albero T, int v) {
    int* A = NULL;
    if (esiste_foglia(T, v)){
        A = costruisci_livello(T, v);
    }
    return A;
}

int* costruisci_livello(albero T, int v) {
    int* A = NULL;
    int l = livello(T, v); //il livello a cui si trova il nodo v
    int n = num_nodi_livello(T, l); //i nodi al livello l
    A = calloc(n,sizeof(int));
    int i = 0;
    riempi(A, T, l, &i);
    return A;
}

void riempi(int* A, albero T, int l, int* i) {
    if (T != NULL) {
        if (l == 0) {
            A[*i] = T->info;
            *i = *i + 1;
        }
        else {
            riempi(A, T->sx, l-1, i);
            riempi(A, T->dx, l-1, i);
        }
    }
}