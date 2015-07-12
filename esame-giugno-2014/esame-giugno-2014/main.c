//
//  main.c
//  esame-giugno-2014
//
//  Created by Antonio on 30/06/15.
//  Copyright (c) 2015 Antonio. All rights reserved.
//

#include <stdio.h>
#include "charTree.h"
#include <stdlib.h>
#include "intList.h"

int main(int argc, const char * argv[]) {
    albero s = malloc(sizeof(nodoAlbero));
    s->info = 'k';
    
    s->left = malloc(sizeof(nodoAlbero));
    s->left->info = 'e';
    
    s->right = malloc(sizeof(nodoAlbero));
    s->right->info = 'm';
    
    s->left->left = malloc(sizeof(nodoAlbero));
    s->left->left->info = 'b';
    
    s->left->right = malloc(sizeof(nodoAlbero));
    s->left->right->info = 'f';
    s->left->right->left=NULL;
    s->left->right->right=NULL;
    
    s->left->left->left = malloc(sizeof(nodoAlbero));
    s->left->left->left->info = 'a';
    s->left->left->left->left = NULL;
    s->left->left->left->right = NULL;
    
    s->left->left->right = malloc(sizeof(nodoAlbero));
    s->left->left->right->info = 'c';
    s->left->left->right->left = NULL;
    s->left->left->right->right = NULL;
    
    s->right->left = malloc(sizeof(nodoAlbero));
    s->right->left->info = 'l';
    s->right->left->left = NULL;
    s->right->left->right = NULL;
    
    s->right->right = malloc(sizeof(nodoAlbero));
    s->right->right->info = 's';
    s->right->right->left = NULL;
    s->right->right->right = NULL;
    
    printf("%d\n", distanza(s, 'k', 'z'));
    lista l = allocaLista(s, 'k');
    stampaLista(l);
    free(l);
    free(s);
    return (0);
}
