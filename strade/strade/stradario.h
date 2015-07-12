//
//  stradario.h
//  strade
//
//  Created by Antonio on 29/06/15.
//  Copyright (c) 2015 Antonio. All rights reserved.
//

#ifndef __strade__stradario__
#define __strade__stradario__

#include <stdio.h>

typedef char string[30];

typedef struct strada {
    string info;
    struct strada* left;
    struct strada* right;
} strada;

typedef strada* stradario;

int verificaPercorso(stradario, string, string);
int cercaStrada(stradario, string);
int cicloStrada(stradario, string);
int connessi(stradario, stradario);
int quartiere(stradario, stradario);
int uguali(stradario, stradario);


#endif /* defined(__strade__stradario__) */
