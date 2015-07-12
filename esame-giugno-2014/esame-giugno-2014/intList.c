//
//  intList.c
//  esame-giugno-2014
//
//  Created by Antonio on 30/06/15.
//  Copyright (c) 2015 Antonio. All rights reserved.
//

#include "intList.h"
#include <stdio.h>
#include <stdlib.h>

lista allocaLista(albero t, char v) {
    if (t != NULL) {
        if (t->info == v) {
            //lista l=malloc(sizeof(nodoLista));
            lista l = NULL;
            creaLista(t,0,&l);
            return l;
        }
        if (t->left != NULL && t->info > v)
            return allocaLista(t->left, v);
        if (t->right != NULL && t->info < v)
            return allocaLista(t->right, v);
        return NULL;
    }
    else
        return NULL;
}


void creaLista(albero t, int i, lista* l) {
    i++;
    if (t->left == NULL && t->right == NULL)
        aggiungiFoglia(i-1, l);
    if (t->left != NULL)
        creaLista(t->left, i, l);
    if (t->right != NULL)
        creaLista(t->right, i, l);
}

void aggiungiFoglia(int i, lista* l) {
    lista n = malloc(sizeof(nodoLista));
    n->info = i;
    n->next = *l;
    *l = n;
}

void stampaLista(lista l) {
    while (l != NULL) {
        printf(" %d -> ",l->info);
        l = l->next;
    }
}