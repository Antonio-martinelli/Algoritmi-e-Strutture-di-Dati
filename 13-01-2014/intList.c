//
//  intList.c
//  13-01-2014
//
//  Created by Antonio on 01/07/15.
//  Copyright (c) 2015 Antonio. All rights reserved.
//

#include "intList.h"
#include <stdlib.h>

void aggiungi(lista* l, int i) {
    lista temp = malloc(sizeof(nodoLista));
    temp->info = i;
    temp->next = *l;
    *l = temp;
}

void stampaLista(lista l) {
    while (l != NULL) {
        printf(" %d ->", l->info);
        l = l->next;
    }
}