#ifndef RSA_H
#define RSA_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>


typedef struct factots{
    long long p;
    long q;
} factots;

factots *factorize (long long n);

#endif /*RSA_H*/