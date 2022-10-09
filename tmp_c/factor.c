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
        if (n%i == 0 && i <= n/2)
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
    qoutents->p = 0;
    qoutents->q = 0;
    return (qoutents);
    exit(EXIT_SUCCESS);
}