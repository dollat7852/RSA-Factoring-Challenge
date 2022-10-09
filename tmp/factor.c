#include "RSA.h"

factots *factorize (unsigned long long int n){
   long i = 2;
    factots *qoutents;

    qoutents = malloc(sizeof (factots));
    if (!qoutents)
        return NULL;

    while (i <= n)
    {
        // printf("in factos\n");
        if (n%i == 0)
        {
            qoutents->p = n/i;
            qoutents->q = i;
            // return (qoutents);
            
            // if (is_prime_number(n/i) && is_prime_number(i))
            if (prime_fact(qoutents))
            {
            return (qoutents);
            exit(EXIT_SUCCESS);
            } 
        }
        i++;
    }
    exit(EXIT_FAILURE);
}