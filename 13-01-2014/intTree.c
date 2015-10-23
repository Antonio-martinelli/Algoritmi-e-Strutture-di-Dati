//
//  intTree.c
//  13-01-2014
//
//  Created by Antonio on 01/07/15.
//  Copyright (c) 2015 Antonio. All rights reserved.
//

#include "intTree.h"
#include <stdlib.h>

lista allocaLista(albero t, int v) {
    lista l = NULL;
    return allocaListaRic(&l, t, v);
}

lista allocaListaRic(lista* l, albero t, int v) {
    if (t != NULL) {
        if (v == 0)
            aggiungi(l, t->info);
        else {
            if (t->right != NULL)
                allocaListaRic(l, t->right, v-1);
            if (t->left != NULL)
                allocaListaRic(l, t->left, v-1);
                    }
    }
    return *l;
}


int verificaLivelli(albero t1, albero t2, int v) {
    int cont = 0;
    lista t1l = allocaLista(t1, v);
    lista t2l = allocaLista(t2, v);
    lista i1 = t1l;
    lista i2 = t2l;
    if (t1l == NULL && t2l == NULL)
        return 0;
    else {
        while (i1 != NULL) {
            while (i2 != NULL) {
                if (i1->info == i2->info)
                    cont++;
                i2 = i2->next;
            }
            i2 = t2l;
            i1 = i1->next;
        }
    }
    return cont;
}
