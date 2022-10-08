#include "RSA.h"

int main (int argc, char **argv){
    FILE *f;
    int n_bytes, ii;
    long int n;
    size_t n_read;
    char **lines;
    char *content, *string;
    factots *p;

    f = fopen(argv[1], "rb");
    if (!f)
    {   
        printf("Unable to open file\n");
        return (0);
    }
    n_bytes=fseek(f,0, SEEK_END);
    n = ftell(f);
    rewind(f); 
    string = malloc(n + 1);
    if (!string){
        printf("unable to allocate memory");
        return (1);
    }
    n_read = fread(string,n,1, f);
    if (!n_read)
        {
            /* printf("No bytes of data was read\n");
 */            return (1);
        }
    fclose(f);
    string[n] = 0;
    
    content= strtok(string, "\n");
    
    ii = 0;
    while (content != NULL)
    {
        /* printf("%s\t", content); */
        p = factorize(atoll(content));
        ii++;
        printf("%llu=%lld*%ld\n",atoll(content), p->p, p->q); 
        content= strtok(NULL, "\n");
    }
     printf("%ld\n\t", n_read);
    return (0);
}