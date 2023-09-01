#include <stdio.h>
#include <string.h>

void lerString(char *minhaString) {
    // Use fgets() para ler a linha
    fgets(minhaString, 100, stdin);

    // Remove o caractere de nova linha (\n) do final da string, se estiver presente
    int comprimento = strlen(minhaString);
    if (minhaString[comprimento - 1] == '\n') {
        minhaString[comprimento - 1] = '\0'; // Substitua \n por \0 (terminador de string)
    }
}

void stringParaIntArray(char *string_numerica, int *array_de_ints, int a) {
    int num_lidos = 0;

    while (*string_numerica && num_lidos < a) {
        int num;
        if (sscanf(string_numerica, "%d", &num) == 1) {
            array_de_ints[num_lidos] = num;
            num_lidos++;
        }

        // Avance até o próximo caractere não branco
        while (*string_numerica && *string_numerica != ' ') {
            string_numerica++;
        }

        // Avance até o próximo espaço em branco
        while (*string_numerica && *string_numerica == ' ') {
            string_numerica++;
        }
    }
}

int somar(int *meuArrayInt){
    int soma = 0;
    
    for(int j = 0; j < sizeof(meuArrayInt); j++){
        soma = soma + meuArrayInt[j];
    }
    
    return soma;
}

int main() {
    // Pega o número de rodadas
    int r;
    do {
        printf("Digite o número de rodadas (entre 0 e 10): ");
        scanf("%i", &r);
    } while (r < 0 || r > 10);

    // Limpeza do buffer de entrada
    while (getchar() != '\n');

    char stringMarcos[100];
    int numMarcos[r];

    // Pega a lista de números
    printf("Digite os números separados por espaços: ");
    lerString(stringMarcos);
    stringParaIntArray(stringMarcos, numMarcos, r);

    // Imprime os números
    printf("Números digitados: ");
    for (int i = 0; i < r; i++) {
        printf("%i ", numMarcos[i]);
    }
    printf("\n");
    
    //soma os Números
    int somaMarcos = somar(numMarcos);
    printf("%i", somaMarcos);
    
    //imprime a soma

    return 0;
}