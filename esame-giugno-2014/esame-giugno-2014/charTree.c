//
//  charTree.c
//  esame-giugno-2014
//
//  Created by Antonio on 30/06/15.
//  Copyright (c) 2015 Antonio. All rights reserved.
//

#include "charTree.h"
#include "bloccoFile.h"

int distanza(albero t, char v1, char v2) {
    if (t != NULL) {
        if ((v1 < t->info && v2 > t->info) || (v1 > t->info && v2 < t->info))
            return 0;
        if (t->info==v1)
            return contaDistanza(t, v2);
        if (t->info == v2)
            return contaDistanza(t, v1);
        if (t->left != NULL)
            return distanza(t->left, v1, v2);
        if (t->right != NULL)
            return distanza(t->right, v1, v2);
        return 0;
    }
    else
        return 0;
}

int contaDistanza(albero t, char v) {
    if(t!=NULL) {
        if(t->info==v)
            return 0;
        if(t->info>v)
            return 1+contaDistanza(t->left, v);
        if(t->info<v)
            return 1+contaDistanza(t->right, v);
        return 0;
    }
    else  return 0;
}

/*
 void modificaFile(albero t) {
    FILE *fp = fopen("/Users/antonio/Desktop/distanze.dat", "rb+");
    bloccoFile bf;
    long pos = 0;
    if (fp == NULL)
        printf("Errore di apertura");
    else
        while (fread(bf, sizeof(bloccoFile), 1, fp) > 0) {
            if (distanza(t, bf[0].x, bf[0].y) != bf[0].z)
                
        }
}
*/