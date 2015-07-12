//
//  main.c
//  strade
//
//  Created by Antonio on 29/06/15.
//  Copyright (c) 2015 Antonio. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "stradario.h"

int main(int argc, const char * argv[]) {
    stradario s1=malloc(sizeof(strada));
    strcpy(s1->info, "Piazza Fontana");
    
    s1->left=malloc(sizeof(strada));
    strcpy(s1->left->info, "Corso Umberto I");
    s1->left->right=NULL;
    
    s1->left->left=malloc(sizeof(strada));
    strcpy(s1->left->left->info, "Piazza Castello");
    s1->left->left->left=NULL;
    s1->left->left->right=NULL;
    
    s1->right=malloc(sizeof(strada));
    strcpy(s1->right->info, "Corso Mazzini");
    s1->right->right=NULL;

    s1->right->left=malloc(sizeof(strada));
    strcpy(s1->right->left->info, "Via Galilei");
    s1->right->left->left=NULL;
    s1->right->left->right=NULL;
    
    stradario s2= malloc(sizeof(strada));
    strcpy(s2->info, "Corso Mazzini");
    s2->right=NULL;
    
    s2->left=malloc(sizeof(strada));
    strcpy(s2->left->info, "Via Galilei");
    s2->left->left=NULL;
    s2->left->right=NULL;
    
    printf("%d",quartiere(s1, s2));
    return 0;
}
