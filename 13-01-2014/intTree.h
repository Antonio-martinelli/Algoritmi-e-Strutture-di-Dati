//
//  intTree.h
//  13-01-2014
//
//  Created by Antonio on 01/07/15.
//  Copyright (c) 2015 Antonio. All rights reserved.
//

#ifndef ___3_01_2014__intTree__
#define ___3_01_2014__intTree__

#include <stdio.h>
#include "intList.h"

typedef struct nodoAlbero{
    int info;
    struct nodoAlbero* left;
    struct nodoAlbero* right;
} nodoAlbero;

typedef nodoAlbero* albero;

lista allocaLista(albero, int);
lista allocaListaRic(lista*, albero, int);
int verificaLivelli(albero, albero, int);
void modificaFile(albero);

#endif /* defined(___3_01_2014__intTree__) */
