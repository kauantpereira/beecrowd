#include <stdio.h>

int main(){

    int pag;
    int q, d, p;
    
    comeco:
    
    do{
        scanf("%i %i %i", &q, &d, &p);
    } while (q < 0 || q > 20 || d < 0 || d > 20 || p < 0 || p > 20);

    if (q != 0 && d != 0 && p != 0){
        
        pag = (d * q * p)/(p - q);
        
        if(pag == 1){
            printf("%i pagina\n", pag);
        } else {
            printf("%i paginas\n", pag);
        }
        goto comeco;
        
        } else {
            return 0;
        }            
}