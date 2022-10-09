#ifndef RSA_H
#define RSA_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h> // square root function


typedef struct factots{
    unsigned long long int p;
    unsigned long q;
} factots;

factots *factorize (unsigned long long int n);
int is_prime_number(unsigned long long int n);
int _is_prime(unsigned long long int n, int  y);
int prime_fact(factots *qoutent);

#endif /*RSA_H*/