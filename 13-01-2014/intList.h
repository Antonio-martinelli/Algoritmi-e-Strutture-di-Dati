//
//  intList.h
//  13-01-2014
//
//  Created by Antonio on 01/07/15.
//  Copyright (c) 2015 Antonio. All rights reserved.
//

#ifndef ___3_01_2014__intList__
#define ___3_01_2014__intList__

#include <stdio.h>

typedef struct nodoLista {
    int info;
    struct nodoLista* next;
} nodoLista;

typedef nodoLista* lista;

void aggiungi(lista*, int);
void stampaLista(lista);

#endif /* defined(___3_01_2014__intList__) */
