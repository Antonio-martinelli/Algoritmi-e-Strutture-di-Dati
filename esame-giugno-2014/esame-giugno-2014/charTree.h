//
//  charTree.h
//  esame-giugno-2014
//
//  Created by Antonio on 30/06/15.
//  Copyright (c) 2015 Antonio. All rights reserved.
//

#ifndef __esame_giugno_2014__charTree__
#define __esame_giugno_2014__charTree__

#include <stdio.h>

typedef struct nodoAlbero {
    char info;
    struct nodoAlbero* left;
    struct nodoAlbero* right;
}nodoAlbero;

typedef nodoAlbero* albero;

int distanza(albero, char, char);
int contaDistanza(albero, char);
void modificaFile(albero);

#endif /* defined(__esame_giugno_2014__charTree__) */
