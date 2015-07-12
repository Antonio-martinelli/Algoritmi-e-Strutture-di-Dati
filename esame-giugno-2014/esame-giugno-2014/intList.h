//
//  intList.h
//  esame-giugno-2014
//
//  Created by Antonio on 30/06/15.
//  Copyright (c) 2015 Antonio. All rights reserved.
//

#ifndef __esame_giugno_2014__intList__
#define __esame_giugno_2014__intList__

#include <stdio.h>
#include "charTree.h"

typedef struct nodoLista {
    int info;
    struct nodoLista* next;
}nodoLista;

typedef nodoLista* lista;

lista allocaLista(albero, char);
void creaLista(albero, int, lista*);
void aggiungiFoglia(int, lista*);
void stampaLista(lista);

#endif /* defined(__esame_giugno_2014__intList__) */
