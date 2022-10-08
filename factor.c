#include "RSA.h"

factots *factorize (long long n){
   long i = 2;
    factots *qoutents;

    qoutents = malloc(sizeof (factots));
    if (!qoutents)
        return NULL;

    while (i <= n){
        if (n % i == 0){
            qoutents->p = n/i;
            qoutents->q = i;
            return (qoutents);
            exit(EXIT_SUCCESS);
        }
        i++;
    }
    exit(EXIT_FAILURE);
}