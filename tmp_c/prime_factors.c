#include "RSA.h"
int prime_fact(factots *qoutent)
{
    // printf("%llu %lu\n", qoutent->p, qoutent->q);
    if (is_prime_number(qoutent->p) && (is_prime_number(qoutent->q)))
        return (1);
    return(0);
}