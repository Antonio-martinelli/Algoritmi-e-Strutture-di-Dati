//
//  stradario.c
//  strade
//
//  Created by Antonio on 29/06/15.
//  Copyright (c) 2015 Antonio. All rights reserved.
//

#include "stradario.h"
#include <string.h>
#include <stdio.h>

int verificaPercorso(stradario s, string strada1, string strada2) {
    if (s == NULL)
        return 0;
    else {
        if (strcmp(s->info, strada1) == 0) {
            return cercaStrada(s, strada2);
        }
        else {
            return verificaPercorso(s->left, strada1, strada2) || verificaPercorso(s->right, strada1, strada2);
            }
    }
}

int cercaStrada(stradario s, string strada) {
    if (s == NULL)
        return 0;
    else {
        if (strcmp(s->info, strada) == 0)
            return 1;
        return cercaStrada(s->left, strada) || cercaStrada(s->right, strada);
    }
}


int cicloStrada(stradario s, string strada) {
    if (s == NULL)
        return 0;
    else {
        if (strcmp(s->info, strada) == 0)
            return cercaStrada(s, strada);
        return (cicloStrada(s->left, strada) || cicloStrada(s->right, strada));
    }
}


int connessi(stradario s1, stradario s2) {
    if (s1->left == NULL && s1->right == NULL)
        return cercaStrada(s2, s1->info);
    else
        return connessi(s1->left, s2) || connessi(s1->right, s2);
}


int quartiere(stradario s1, stradario s2) {
    if (s1 == NULL)
        return 0;
    else {
        if(s2!=NULL) {
            if (strcmp(s1->info, s2->info) == 0)
                return uguali(s1, s2);   //to be implemented
            return quartiere(s1->left, s2) || quartiere(s1->right, s2);
        }
        else
            return 1;
    }
    
}

int uguali(stradario s1, stradario s2) {
    if(s2==NULL) return 1;
    else {
        return strcmp(s1->info, s2->info)==0 && uguali(s1->left, s2->left) && uguali(s1->right, s2->right);
    }
}