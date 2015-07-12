//
//  main.c
//  13-01-2014
//
//  Created by Antonio on 01/07/15.
//  Copyright (c) 2015 Antonio. All rights reserved.
//

#include <stdio.h>
#include "intTree.h"
#include <stdlib.h>
#include "intList.h"

int main() {
    albero a=malloc(sizeof(nodoAlbero));
    a->info = 15;
    
    a->left=malloc(sizeof(nodoAlbero));
    a->left->info=10;
    
    a->left->left=malloc(sizeof(nodoAlbero));
    a->left->left->info=8;
    
    a->left->right=NULL;
    
    a->left->left->left=malloc(sizeof(nodoAlbero));
    a->left->left->left->info=5;
    
    a->left->left->left->left=NULL;
    a->left->left->left->right=NULL;
    
    a->left->left->right=malloc(sizeof(nodoAlbero));
    a->left->left->right->info=9;
    
    a->left->left->right->left=NULL;
    a->left->left->right->right=NULL;
    
    a->right=malloc(sizeof(nodoAlbero));
    a->right->info=25;
    
    a->right->right=malloc(sizeof(nodoAlbero));
    a->right->right->info=29;
    
    a->right->left=malloc(sizeof(nodoAlbero));
    a->right->left->info=19;
    
    a->right->left->left=NULL;
    a->right->left->right=NULL;
    
    a->right->right->left=NULL;
    a->right->right->right=NULL;
    
    albero t = malloc(sizeof(nodoAlbero));
    t->info = 15;
    
    t->left = malloc(sizeof(nodoAlbero));
    t->left->info = 10;
    
    t->right = malloc(sizeof(nodoAlbero));
    t->right->info = 25;
    
    t->left->left = malloc(sizeof(nodoAlbero));
    t->left->left->info = 8;
    
    t->left->left->left = malloc(sizeof(nodoAlbero));
    t->left->left->left->info = 5;
    
    t->left->left->right = malloc(sizeof(nodoAlbero));
    t->left->left->right->info = 9;
    
    t->right->left = malloc(sizeof(nodoAlbero));
    t->right->left->info = 19;
    
    t->right->right = malloc(sizeof(nodoAlbero));
    t->right->right->info = 29;
    
    t->right->right->left = malloc(sizeof(nodoAlbero));
    t->right->right->left->info = 28;
    
    t->right->right->right = malloc(sizeof(nodoAlbero));
    t->right->right->right->info = 31;
    
    //lista l = allocaLista(a, 3);
    
    //stampaLista(l);
    int c = verificaLivelli(a,t,3);
    printf("%d", c);
    
    
    free(a);
    //free(l);
    free(t);
    
}
