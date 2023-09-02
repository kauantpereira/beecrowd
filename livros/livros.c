#include <stdio.h>

int main(){
    int q, d, p; //declara as variáveis
    int pag;
    
    comeco: //início do loop
    
    do{
        scanf("%i %i %i", &q, &d, &p); //recebe os valores
    } while (q < 0 || q > 20 || d < 0 || d > 20 || p < 0 || p > 20); //repete caso algum dos valores não seja válido

    if (q != 0 && d != 0 && p != 0){ //se nenhum dos valores é zero, executa normalmente
        
        pag = (d * q * p)/(p - q); //calcula o número de páginas do livro pela fórmula
        
        if(pag == 1){ //imprime a resposta no singular
            printf("%i pagina\n", pag);
        } else { //imprime a resposta no plural
            printf("%i paginas\n", pag);
        }
        
        goto comeco; //recebe novos valores e repete o processo
        
    } else { //se pelo menos um dos valores é zero, encerra o programa
        
        return 0;
        
    }            
}
