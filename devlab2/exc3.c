#include <stdio.h>

// Função para verificar se um número está no array
int ElementoEscolhido(int arr[], int tamanho) {
    int numero_sugerido = 1; // Número que queremos encontrar
    int encontrado = 0; // Variável booleana (0 = não encontrado, 1 = encontrado)

    for (int i = 0; i < tamanho; i++) { // Percorre todo o array
        if (arr[i] == numero_sugerido) { // Verifica se o número está no array
            encontrado = 1;
            break; // Para o loop assim que encontrar o número
        }
    }
    
    return encontrado; // Retorna 1 se o número foi encontrado, 0 caso contrário
}

int main() {
    int numeros[] = {5, 2, 9, 6, 1, 0 }; // Definição do array
    int tamanho = sizeof(numeros) / sizeof(numeros[0]); // Cálculo do tamanho do array

    int encontrado = ElementoEscolhido(numeros, tamanho); // Chama a função

    if (encontrado) {
        printf("O numero foi encontrado no array.\n" );
    } else {
        printf("O numero nao foi encontrado no array.\n");
    }

    return 0; // Indica que o programa terminou com sucesso
}
