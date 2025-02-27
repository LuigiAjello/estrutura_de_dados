#include <stdio.h>

// Função para encontrar o maior elemento de um array
int maiorElemento(int arr[], int tamanho) {
    if (tamanho == 0) return -1; // Retorna -1 se o array estiver vazio

    int maior = arr[0]; // Assume que o primeiro elemento é o maior

    for (int i = 1; i < tamanho; i++) { // Percorre o array a partir do segundo elemento
        if (arr[i] > maior) {
            maior = arr[i]; // Atualiza o maior se encontrar um número maior
        }
    }
    
    return maior; // Retorna o maior valor encontrado
}

int main() {
    int numeros[] = {5, 2, 9, 1, 6}; // Definição do array
    int tamanho = sizeof(numeros) / sizeof(numeros[0]); // Cálculo do tamanho do array

    int maior = maiorElemento(numeros, tamanho); // Chama a função e armazena o resultado

    printf("O maior elemento é: %d\n", maior); // Imprime o maior elemento
    
    return 0; // Indica que o programa terminou com sucesso
}
