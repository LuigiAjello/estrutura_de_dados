#include <stdio.h>

// Função para encontrar o menor elemento de um array
int menorElemento(int arr[], int tamanho) {
    if (tamanho == 0) return -1; // Retorna -1 se o array estiver vazio

    int menor = arr[0]; // Assume que o primeiro elemento é o menor

    for (int i = 1; i < tamanho; i++) { // Percorre o array a partir do segundo elemento
        if (arr[i] < menor) {
            menor = arr[i]; // Atualiza o menor se encontrar um número menor
        }
    }
    
    return menor; // Retorna o menor valor encontrado
}

int main() { // Alterado de void main() para int main()
    int numeros[] = {5, 2, 9, 1, 6}; // Definição do array
    int tamanho = sizeof(numeros) / sizeof(numeros[0]); // Cálculo do tamanho do array

    int menor = menorElemento(numeros, tamanho); // Chama a função e armazena o resultado

    printf("O menor elemento é: %d\n", menor); // Imprime o menor elemento
    
    return 0; // Indica que o programa terminou com sucesso
}
